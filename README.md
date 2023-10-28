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

#### Remove files form cache (from seen git)
- git rm <filename>
- git rm -r <directory>
After doing the commands:
- git commit -m "<message>"
- git push origin <branch>

#### Ignore Files
- Create a .gitignore
- Within the File: Specify specific patterns with * or:
    - <file>
    - <directory>/

#### Deleting a Branch
for local
- git branch -d <branch>
for remote
- git push origin --delete <branch>
Both can be done on succession

Deleting the remote but keeping the local: one the local is pushed, will recreate the branch in the remote
If the local branch is deleted but kept in the remote then a new branch in the local is recreated with the same name; there would be two branches
with the same name; git allows for the same name for more than one branch




