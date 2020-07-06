#!bin/bash

######################################################################################
# Simple software that skips me to doing the "add, commit and push to origin master" #
# how to use: just run the script with "~/sh apsuh.sh" and input your commit message #
# by defaut, this script shows you that it is running, the repository status and     #
# ask you what is your commit message and ends showing you the last commit.          #
# all of these routines can be altered according your necessities.                   #
# that's all folks, have a nice use - Gabriel Lima.                                  #
######################################################################################

printf "excecuting $0 \n";
echo "this is your repository status\n";
git status -s;

echo "\n";
git add .;

echo "insert your commit message:\n";
read commitMessage;
git commit -m "$commitMessage";
echo "\n";

# if you want to set an internal message for yout commits just uncomment
# the line below and comment the two lines above.
# git commit -m "commit message";

git push origin master;
echo -e "\n";
echo -e "the commit below was made with apush:";
git log -1;
