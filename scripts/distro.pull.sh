#!/bin/bash
GITURL="$(git config --get remote.opencivic_github.url)"
BRANCH="7.x-2.x"
PREFIX="projects/opencivic"
echo "Pulling in latest updates on branch $BRANCH from remote $GITURL."
 
# Change to git root directory.
cd "$(git rev-parse --show-toplevel)"
git checkout opencivic_7.x-2.x
git pull --rebase
git checkout opencivic_7.x-2.x-test
git merge --squash -s subtree --no-commit opencivic_7.x-2.x
