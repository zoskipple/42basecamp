cat /etc/passwd | grep -v "^#" | cut -d"#" -f1 | awk '{if(NR%2==0)print}' | cut -d":" -f1 | rev | sort -r | awk -v fl1=$FT_LINE1 -v fl2=$FT_LINE2 'NR >= fl1,NR <= fl2{print}' | tr '
' ',' | sed 's/,/, /g' | sed 's/, $/./'
