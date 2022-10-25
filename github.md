Here are some of the github-technique which one should know
Please have a look


git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/Samir-Giripunje/sublime-snippet.git
git push -u origin main

From <https://github.com/Samir-Giripunje/sublime-snippet> 




//To check the version
git --version
 
//to change the name
git config --global user.name"Samir Giripunje"
 
//to change the email
git config --global user.emai"samirgiripunje5@gmail.com"
 
//to make directory
mkdir Name
 
//to make new file
echo > "reverse-array"
 
//to move in Name
cd Name
 
/to initialize it as git
git init
 
//to know status
git status
 
//to add that file(staging area)
git add sum.cpp
 
//to commit
git commit -m "My first commit"
 
//to know all commit
git log
 
//to add all file in staging area
git add .
 
//to go to the previous version
git checkout hashcode/filename
 
//to go to last commit
git checkout master
 
//to know branches
git branch
 
//to make new branch
Git checkout  -b Samir
 
//to create new branch and move directly
git checkout -b SAmir
 
//to merge this branch
git merge branchName
 
//to ignore pushingin git
touch .gitignore
 
inside gitignore write the name of the file which you don't want to send in git
// to make the branch under same condition or if u changed on thegit hub always remember to do
git pull origin branchname
 
//to push the code for 1st time in that branch
git push  --set -upstream origin branchname
 
////form 2nd  time we  can use
 
 
//to unstage the file 
git restore --staged filename        //  git restore filename
or gir rm –chached filename
 
//git initializing folder to it
git remote add origin <url>
