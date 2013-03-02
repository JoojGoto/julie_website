#!/bin/bash
# This simple script takes two arguments <search> and <replace> and:
# 1. Copies all folders found that match <search> into <replace>, renaming files as required
# 2. Searches through the contents of all files for <search> and replaces it with <replace>

# This script is *not* currently recursive. It won't renamespace modules or themes within other modules or themes.

# This is great for re-namespacing a drupal installation profile from something like "template" to the name of the project.
# Be aware that there's no safety cap on this, if you do something stupid like using the name of a Drupal hook function as your search
# string you'll obviously break things.

# IMPORTANT: I highly recommend that you have your project checked into some kind of version control like git BEFORE running this script

if [ -z "${1}" ]
then
	echo 'You need to pass a <search> and <replace> string (in that order) to this script';
	exit 0;
fi

if [ -z "${2}" ]
then
	echo "You need to pass a <replace> string to this script as well as your <search> string";
	exit 0;
fi

# copy all the existing directories into the new namespace
find . -d -type d -name "${1}*" | while read FILENAME
do
  NEWFILENAME=${FILENAME/"${1}"/"${2}"};
  rsync -a "$FILENAME"/ "$NEWFILENAME"/;
  unset NEWFILENAME;
done
unset FILENAME;

# find all directories in the new namespace and update the contained files
find . -d -type d -name "${2}*" | while read FOLDERNAME
do
  find $FOLDERNAME -type f -name "${1}*" | while read FILENAME
  do
    NEWFILENAME=${FILENAME/"${1}"/"${2}"};
    mv $FILENAME $NEWFILENAME;
  done
  unset FILENAME;
  grep -rl "${1}" $FOLDERNAME | xargs sed -i '' "s/${1}/${2}/g"
done
unset FOLDERNAME;

# non-recursively update the names of the profile root files
find . -d -type f -maxdepth 1 -name "${1}*" | while read FILENAME
do
  NEWFILENAME=${FILENAME/"${1}"/"${2}"};
  mv $FILENAME $NEWFILENAME;
done
unset FILENAME;

# non-recursively update the contents of the profile root files
grep -l "${1}" ./* | xargs sed -i '' "s/${1}/${2}/g"

# finally, update the name of the profile directory
PROFILEDIRNAME=${PWD##*/};
NEWPROFILEDIRNAME=${PROFILEDIRNAME/"${1}"/"${2}"};
mv ../$PROFILEDIRNAME ../$NEWPROFILEDIRNAME;
unset $PROFILEDIRNAME $NEWPROFILEDIRNAME;
