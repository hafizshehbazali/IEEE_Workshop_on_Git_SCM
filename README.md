# IEEE_Workshop_on_Git_SCM
You will learn the basic of git command line and bash.


## fork the repo

click on the fork button. 

## clone the project locally. 
    git clone project-url
## change in the code in the working directory.  
* open existed files to change .
* create new files. 
* delete.
## see the status of changing. 
    git status 
## Add the files  in the staging area. 
 
use this command to add all the files. 
   
    git add .

use this command to add the single file

    git add file-name

use this command to add folder 

    git add folder-name/*

## git commit to add the changes in the repository directory. 

    git commit -m "Type your message whatever you changes"

## Log 
git log to check the all commits. 

    git log 

git log to check the log for specific number of commits 

    git log -n

## show 
to see the changes. 

    git show 

## Branch 
to create, add , rename and delete the branch

    git branch -v 
## Remote 
to check the remotes 

    git remote -v 

to add the remote 
    
    git remote add remote-name  git-repository-url
## Pull
to fetch and merge all the remote changes in the local . 
   git pull remote-name branch-name

## Push 
to push local changes to remote 
   git push remote-name branch-name 
 
