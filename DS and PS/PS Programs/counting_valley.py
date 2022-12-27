n=8
s="UDDDUDUU"
level=0
valley_count=0
for i in s:
    if i=='U':
        level+=1
    else:
        level-=1
    if level>0:
        valley_count+=1
print(valley_count)
