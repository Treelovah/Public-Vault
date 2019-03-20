#! /bin/bash

# so this will be fun, its my first real bash scrip that
# was built to grab files from my server quickly.

echo "Choose site"
read ipChosen

echo "Choose file to download (full-path-to-file): "
read fileChosen
wget https://$ipChosen/$fileChosen
