[difftool "winmerge"]
	cmd = WinMergeU.exe -e "$LOCAL" "$REMOTE"
[difftool "compareit"]
	cmd = "'C:/Program Files (x86)/Compare It/wincmp3.exe'" "$LOCAL" "$REMOTE" /M
[alias]
	dtc = difftool -y -t compareit
	dtw = difftool -y -t winmerge -- '*.lvproj' '*.lvclass'