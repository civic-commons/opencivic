#!/bin/bash
 
# Pull down latest copy of DKAN.
./distro.pull.sh
 
GIT_ROOT=$(git rev-parse --show-toplevel)
cd $GIT_ROOT
 
echo "Removing docroot"
rm -rf docroot
 
echo "Building OpenCivic profile"
# drush make -y scripts/build-dkan-profile.make docroot --no-gitinfofile
drush make -y projects/opencivic/build-opencivic-profile.make docroot --no-gitinfofile
 
# Remove .gitignore files that are undesired.
 
echo "Symlinking sites directory to docroot/sites"
cd docroot
rm -rf sites
ln -s ../sites
echo "Symlinking .htaccess docroot/.htaccess"
rm .htaccess
ln -s ../.htaccess
echo "Symlinking robots.txt to docroot/robots.txt"
rm robots.txt
ln -s ../robots.txt