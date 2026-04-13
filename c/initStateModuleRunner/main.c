//
// Copyright (C) 2025 —͟͞͞★ ɪᴋ𝘂ᵞο ᴋ𝖎𝘵𝕒 ★ <ayumi.aiko@outlook.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <tsukika.h>

// current init state, as given by the argv[1].
int currentState = 0;

// a new variable for logging. please ignore it.
char *codenameForThisBinary = "initStateModuleRunner"

// used for monitoring battery percentage.
char *batteryPercentageBlobFilePaths[] = {NULL};

// resetprop. *AHEM*
char *const resetprop = "/system/bin/resetprop";

// logfile.
char *LOGFILE = "/data/system/tsukika.log";

// a toggle that is used to switch between stdio and logfile for logging.
bool useStdoutForAllLogs = false;

int main(int argc, char **argv)
{ 
    if(argc < 2) 
    {
        consoleLog(LOG_LEVEL_ERROR, "main", "No state provided.");
        return 1;
    }
    if(strcmp(argv[1], "init") == 0) currentState = INIT;
    else if(strcmp(argv[1], "late-fs") == 0) currentState = LATE_FS;
    else if(strcmp(argv[1], "post-fs") == 0) currentState = POST_FS;
    else if(strcmp(argv[1], "post-fs-data") == 0) currentState = POST_FS_DATA;
    else if(strcmp(argv[1], "boot-completed") == 0) currentState = BOOT_COMPLETED;
    else 
    {
        consoleLog(LOG_LEVEL_ERROR, "main", "Unknown state, can't load up any modules.");
        return 1;
    }
    listModulesAndVerifyThem();
}