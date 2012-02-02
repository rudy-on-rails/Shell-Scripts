#!/bin/sh
function executeCucumberTestFor(){
	if [ "$2" ]; then
	  cucumber $1:$2 --require features
	else
	  cucumber $1 --require features
	fi	
}

file_path=`find . -name $1`
line_number=`echo $2`

executeCucumberTestFor $file_path $line_number