# env-tools
Common tools for git development environment

## Usage
1. clone the repo in git / sourcetree
2. open the git bash from the repo
3. make setupEnv.sh executable: `chmod+x setupEnv.sh`
4. execute it: `./setupEnv.sh`

To verify it worked, check your .gitconfig file (typically in C:\users\<your user>\.gitconfig). It will have these 2 lines:
1. in [core] section: attributesfile = C:/<path to env-tools repo>/env-tools/attributes.inc
2. in [include] section: path = C:/<path to env-tools repo>/env-tools/tools.inc
