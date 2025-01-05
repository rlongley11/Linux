#!/usr/bin/bash
echo
echo "Git Branch:" 
eval git branch --show-current 
echo "Commit Hash: " 
eval git rev-parse --short=7 HEAD
eval git status -s
echo
