s = input()
flag0 = 0
flag1 = 0
for id in s:
    if id == "1":
        flag1+=1
    elif id == "0":
        flag0 +=1
    
if flag1 == 0:
    print(flag0)
elif flag0 == 0:
    print(flag1)
elif flag0>flag1:
    print(flag0-flag1)
elif flag0<flag1:
    print(flag1-flag0)
else :
    print(1)