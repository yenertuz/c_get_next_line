#!usr/bin/bash

cd ..
git clone https://github.com/yenertuz/ft001_gnl.git xx
rm -rRf xx/libft
cp -R libft xx/
cd xx
git add .
git commit -m "m"
git push
cd ..
rm -rRf xx
