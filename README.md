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
    - git merge origin <branch>
- git pull origin <branch>
All:
git pull --all
Rebase: Local commits on top of fetched changes
- git rebase origin <branch>
- git pull --rebase origin <branch>
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

#### Reversion
Unstaged: git add
Reverts back to previous version
- git checkout HEAD/--
    - Argument: git checkout -- <file>
    - Argument: git checkout HEAD <file>
To remove from being staged:
- git reset <filename or HEAD>
Note: HEAD (most current), . (all from current directory)
If Commited
- git reset --soft HEAD~n
where n is the number of last version commits; if wanting to revert to before: HEAD~1
soft means that it undos the commit but retaions the working directory
- git reset --hard HEAD~n
forcefully reset the branch to the previous commit
###### git checkout
Can be used with branches, commit hashes, and tags
- Commit Hashes: detached HEAD state where it is a view of a version
- git log: get the commit hash associated with the targeted commit
- git show <hash>
- git checkout <hash>
-- creates a detached HEAD of the commit version where new branches can be made
##### Versions
Tags: Specify specific commit that are emphasized
List different tags:
- git tag
Create a tag
i) Lightweight
git tag <tag>
ii) annotated tag
git tag -a <tag> -m "<>"
Push the tag name
git push origin <tag>
- do after commiting
git checkout <tag>
##### HEAD
- Pointer that represents the most recent commit version of the current branch
- detached HAED
Checkout a specific commit hash or tag

#### Others:
git switch
git branch

Change a git repo to a non git repo:
rm -rf .git

Uncache commited files or directories to be ignored
git rm --cached -r <directory/file>
git commit -m "<>"
git push origin <branch>

#### Submodules: git repos inside of git repos
##### Connect a submodule
git submodule add <repo-url> path/to/gitRepo
git submodule init --Access to the actual repo
git submodule update --Update the submodule within the remote main repo\
-- or
git submodule update --init <optional: specify submodules>

git add .
git commit -m "<>"

-- cloning a repo with a submodule
git clone --recursive <repo-url>