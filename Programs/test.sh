#!/bin/bash

ls /home/rlongley11/ | tee test2.txt
ls /home/ | tee -a test2.txt
/home/rlongley11/gitdirty | tee -a test2.txt
