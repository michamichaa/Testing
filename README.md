# Testing

Hello, I am changing the files

Hello, again, I am now changing this again in a branched repository


#### Instruction for GIT


- git add .
- git commit "<>"
if in main
- git push origin main
if not 
- git push origin <branch>
- git checkout <merge_branch>
- git merge <branch>
- git push origin <merge_branch>
or
- git push origin <branch>:<merge_branch>

- Creation of a new branch from current branch
- git checkout -b <branch>
if create but stay on current
- git branch <branch>

#### Make an existing repo into a git repo
- git init
- git add .
- git commit -m "<>"
- Possily: git branch -M main
- git remote add origin <https>
- git push origin main

#### updating
- git fetch origin <branch>
- git pull origin <branch>

##### Information
- git log

#### Upstreaming: Shorthand
- git <command> u origin <branch>
allows for git <command> to be done without the remote and local arguments



