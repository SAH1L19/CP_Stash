#!/bin/bash

# Change to the directory containing your CP codes
cd D:\Code Files\CP\first.cpp

# Stage all changes
git add .

# Commit changes with a message
# The commit message can be dynamic. Here it uses the current date and time.
git commit -m "Auto commit: $(date '+%Y-%m-%d %H:%M:%S')"

# Push changes to the remote repository
git push origin master
