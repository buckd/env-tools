#!/bin/bash
# Method to determine absolute path
# The -W parameter on the pwd command is necessary to return the Windows
# version of the path. Not using the -W parameter will result in a conversion
# of temp directory to a 'tmp' path meaningful only in the Linux environment.
# Piping the result through tr '/' '\\' translates the forward slashes to backslashes.
# Windows understands forward slashes, but LVCompare.exe does not.
abspath () {
   (
   DIR=$(dirname "$1")
   FN=$(basename "$1")
   cd "$DIR"
   echo -n "$(pwd -W)/$FN" | tr '/' '\\'
   )
}

lvcompareNormalLocation="C:/Program Files/National Instruments/Shared/LabVIEW Compare/LVCompare.exe"
lvcompare64bitWin32bitLV="C:/Program Files (x86)/National Instruments/Shared/LabVIEW Compare/LVCompare.exe"

if [ -e "$lvcompareNormalLocation" ]; then
   lvcompare="$lvcompareNormalLocation"
elif [ -e "$lvcompare64bitWin32bitLV" ]; then
   lvcompare="$lvcompare64bitWin32bitLV"
else
   echo "LVCompare not found!"
   exit
fi

local=$(abspath "$2")
remote=$(abspath "$1")
exec "$lvcompare" -nobdpos -nofppos "$local" "$remote"
