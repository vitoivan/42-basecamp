#!/bin/sh

cat /etc/passwd | grep . -n | awk -F ":" '{
	
	if($1 % 2 == 0)
		print  $2
}' | rev | awk -F ":" '{

	print $1 | "sort -r"
}'| grep . -n | awk -F ":" '{

	if($1 >= start)
		printf "%s, ", $2
		if($1 == end)
			printf "%s.", $2
}' start=$FT_LINE1 end=$FT_LINE2
