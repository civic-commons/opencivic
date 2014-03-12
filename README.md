Drupal codebase for an Opencivic-based website.

git remote add origin https://github.com/civic-commons/opencivic.git

h2. To merge changes from the upstream distro to the test environment

git checkout opencivic_7.x-2.x-test
git merge --squash -s subtree --no-commit opencivic_7.x-2.x
git pull --rebase
git push

h2. To merge changes from the test environment back to the upstream distro

git checkout opencivic_7.x-2.x
git merge --squash -s subtree --no-commit opencivic_7.x-2.x-test
git pull --rebase
git push

h2. Miscellaneous tricks

To remove all empty directories (which git sometimes fails to do):

find -depth -type d -empty -exec rmdir {} \;

h2. To install the subtree module

cd ~/
git clone
cd git/contrib/subtree
make
sudo install -m 755 git-subtree /usr/lib/git-core
cd ~/
rm -Rf git




mkdir opencivic_site
cd opencivic_site
mkdir projects
mkdir scripts
git remote add opencivic_remote sheldon@git.drupal.org:project/opencivic.git
git fetch opencivic_remote
git checkout -b opencivic_branch opencivic_remote/7.x-2.x
git read-tree --prefix=projects/opencivic/ -u opencivic_branch
cd projects/opencivic/
drush make build-opencivic.make ../../docroot -y --no-gitinfofile
cd ../../
git add docroot
git commit -am "create build of OpenCivic distro"



cat <<EOF >/etc/apache2/sites-available/opencivic.local
<Directory /var/www/opencivic_site/docroot>

  Options FollowSymLinks
  AllowOverride All

  # Protect files and directories from prying eyes.
  <FilesMatch "\.(engine|inc|info|install|make|module|profile|test|po|sh|.*sql|theme|tpl(\.php)?|xtmpl)$|^(\..*|Entries.*|Repository|Root|Tag|Template)$">
    Order allow,deny
  </FilesMatch>

  # Hide these from public view.
  <FilesMatch "(^LICENSE|CHANGELOG|MAINTAINERS|INSTALL|UPGRADE|API|README).*\.txt$">
    Order deny,allow
    Deny from all 
  </FilesMatch>

</Directory>

<VirtualHost *:80>
  ServerName opencivic.local
  DocumentRoot /var/www/opencivic_site/docroot
  LogLevel warn
  ServerSignature Off
</VirtualHost>
EOF


ln -s /etc/apache2/sites-available/opencivic.local /etc/apache2/sites-enabled/opencivic.local


sudo a2ensite opencivic.local
sudo service apache2 restart
sudo apachectl restart

mysqladmin -u root create opencivicdb
mysql -u root
GRANT SELECT, INSERT, UPDATE, DELETE, CREATE, DROP, INDEX, ALTER ON opencivicdb.* TO 'opencivic'@'localhost' IDENTIFIED BY 'rN31wrld';
