#!/bin/bash
GITURL="https://github.com/civic-commons/opencivic.git"
BRANCH="7.x-2.x"
PREFIX="projects/opencivic"
echo "Pulling in latest updates on branch $BRANCH from remote $GITURL."
 
# Change to git root directory.
cd "$(git rev-parse --show-toplevel)"
git checkout opencivic_branch
git pull --rebase
git checkout master
git merge --squash -s subtree --no-commit opencivic_branch
