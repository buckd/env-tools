# Tools for calling git diff
# Which diff is defined in .gitattributes
[diff "winmerge"]
	command = "'C:/Program Files/WinMerge/WinMergeU.exe'" -e "$LOCAL" "$REMOTE"
[diff "compareit"]
	command = "'C:/Program Files (x86)/Compare It/wincmp3.exe'" "$LOCAL" "$REMOTE"
[diff "lvcompare"]
	command = "$HOME/lvcompare.sh" "$LOCAL" "$REMOTE"

# Tools for calling git difftool
# Explicitly choose which difftool to use
[difftool "winmerge"]
	cmd = "'C:/Program Files/WinMerge/WinMergeU.exe'" -e "$LOCAL" "$REMOTE"
[difftool "compareit"]
	cmd = "'C:/Program Files (x86)/Compare It/wincmp3.exe'" "$LOCAL" "$REMOTE"
[difftool "lvcompare"]
	cmd = "$HOME/lvcompare.sh" "$LOCAL" "$REMOTE"

# Aliases for each of the difftool commands
# Aliases for different git log configurations (swiped from rtzoeller)
[alias]
	dtc = difftool -y --tool=compareit
	dtl = difftool -y --tool=lvcompare
	dtw = difftool -y --tool=winmerge

	lg = !"git lg1"
	lg1 = !"git lg1-specific --all"
	lg2 = !"git lg2-specific --all"
	lg3 = !"git lg3-specific --all"

	lg1-specific = log --graph --abbrev-commit --decorate --format=format:'%C(bold blue)%h%C(reset) - %C(bold green)(%ar)%C(reset) %C(white)%s%C(reset) %C(dim white)- %an%C(reset)%C(auto)%d%C(reset)'
	lg2-specific = log --graph --abbrev-commit --decorate --format=format:'%C(bold blue)%h%C(reset) - %C(bold cyan)%aD%C(reset) %C(bold green)(%ar)%C(reset)%C(auto)%d%C(reset)%n''          %C(white)%s%C(reset) %C(dim white)- %an%C(reset)'
	lg3-specific = log --graph --abbrev-commit --decorate --format=format:'%C(bold blue)%h%C(reset) - %C(bold cyan)%aD%C(reset) %C(bold green)(%ar)%C(reset) %C(bold cyan)(committed: %cD)%C(reset) %C(auto)%d%C(reset)%n''          %C(white)%s%C(reset)%n''          %C(dim white)- %an <%ae> %C(reset) %C(dim white)(committer: %cn <%ce>)%C(reset)'

	git = !"git"
