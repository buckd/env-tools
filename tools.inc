# Tools for calling git diff
# Which diff is defined in .gitattributes
[diff "winmerge"]
	command = WinMergeU.exe -e "$LOCAL" "$REMOTE"
[diff "compareit"]
	command = "'C:/Program Files (x86)/Compare It/wincmp3.exe'" "$LOCAL" "$REMOTE"
[diff "lvcompare"]
	command = "$HOME/lvcompare.sh" "$LOCAL" "$REMOTE"

# Tools for calling git difftool
# Explicitly choose which difftool to use
[difftool "winmerge"]
	cmd = WinMergeU.exe -e "$LOCAL" "$REMOTE"
[difftool "compareit"]
	cmd = "'C:/Program Files (x86)/Compare It/wincmp3.exe'" "$LOCAL" "$REMOTE"
[difftool "lvcompare"]
	cmd = "$HOME/lvcompare.sh" "$LOCAL" "$REMOTE"

# Aliases for each of the difftool commands
[alias]
	dtc = difftool -y --tool=compareit
	dtl = difftool -y --tool=lvcompare -- '*.vi' '*.vit' '*.ctl' '*.ctt' '*.llb'
	dtw = difftool -y --tool=winmerge
