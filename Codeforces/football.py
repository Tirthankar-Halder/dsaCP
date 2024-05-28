s = input()
ls = list(s)

flag1 = 0
flag2 = 0
for id in ls:
    if flag1>=7 or flag2>=7:
        break
    elif int(id)==0:
        flag1+=1
        flag2=0
    elif int(id)==1:
        flag2+=1
        flag1=0
    
if flag1==7 or flag2==7:
    print("YES")
else:
    print("NO")
    