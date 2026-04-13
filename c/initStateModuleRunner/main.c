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
    
}