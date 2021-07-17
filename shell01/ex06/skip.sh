#!/bin/sh

ls -l | grep . -n | awk -F ":" '{
	if($1 % 2 == 1)
		printf "%s\n", $2
}'
