#!/bin/sh
cat /etc/passwd | grep -Eio '^[^:]+' | sed -n 2~2p | rev | sort -r | head -n$FT_LINE2 | tail -n+$FT_LINE1 | perl -pe 's/\n/, /' | perl -pe 's/, $/./'