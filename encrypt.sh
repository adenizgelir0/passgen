gpg --symmetric pass
git add pass.gpg
git commit -m "new"
rm pass
git push -u origin master
