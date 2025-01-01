#!/bin/bash

echo
echo "contents of rlongley11 folder"
ls /home/rlongley11/ | tee test.txt
(echo
echo "contents of home"
ls /home/
echo
echo "gitdirty"
../../gitdirty.sh) | tee -a test.txt
