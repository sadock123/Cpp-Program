st=''
count=0
name=str(input())
for i in name:
    if i not in st:
        count=count+1
        st=st+i
    else:
        continue
if (count%2==0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")