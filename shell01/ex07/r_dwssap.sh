#!/bin/sh
cat /etc/passwd | sed 's/:.*//' | awk 'NR % 2 == 0' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed -e 's/,/, /g' | sed 's/, $/./'