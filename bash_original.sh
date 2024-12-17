#!/bin/bash 
#bash initial comment

#echo hello world 		#echo displays hello world
#echo 'hello world'		#also displays hello world

hw='hello world'		#sets variable
echo $hw				#displays contents of variable

ls -l Documents/
ls -l Documents/ | awk '{print $1}'
ls -l Documents/ | awk '{print $2}'
ls -l Documents/ | awk '{print $1 $2}'

