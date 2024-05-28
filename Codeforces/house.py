s = input()
flag1 = 0
flag2 = 0
for id in s:
    if id.isupper():
        flag1+=1
    else:
        flag2+=1
if flag1>flag2:
    print(s.upper())
else:
    print(s.lower())