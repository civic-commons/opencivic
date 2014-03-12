#!/bin/bash

MAKEFILE="$1"
MAKEPATH="projects/opencivic/build-opencivic.make"
if [ "$MAKEFILE" == "default" ] || [ "$MAKEFILE" == "" ]; then
  MAKEPATH="projects/opencivic/build-opencivic.make"
elif [ "$MAKEFILE" == "override" ]; then
  MAKEPATH="scripts/override-opencivic.make"
else
  MAKEPATH="scripts/$MAKEFILE"
fi

GIT_ROOT=$(git rev-parse --show-toplevel)
cd $GIT_ROOT
 
# Pull down latest copy of OpenCivic.
bash scripts/distro.pull.sh

echo "Removing docroot"
rm -rf docroot
 
echo "Building OpenCivic profile from makefile at path $MAKEPATH"
# drush make -y scripts/rebuild-opencivic.make docroot --no-gitinfofile
drush make -y "$MAKEPATH" docroot --no-gitinfofile

# Remove .gitignore files that are undesired.
rm docroot/profiles/opencivic/.gitignore
rm docroot/profiles/opencivic/libraries/Leaflet/.gitignore
 
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