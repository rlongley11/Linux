#!/usr/bin/bash
echo
branch=$(eval git branch --show-current) 
echo "Git Branch: $branch" 
commit=$(eval git rev-parse --short=7 HEAD)
echo "Commit Hash: $commit" 
eval git status -s
echo
