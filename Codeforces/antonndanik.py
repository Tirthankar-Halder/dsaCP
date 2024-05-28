n = int(input())
s = input()
flag1 = 0
flag2 = 0
for id in s:
    if id == 'A':
        flag1+=1
    else:
        flag2+=1
if flag1>flag2:
    print("Anton")
elif flag1<flag2:
    print("Danik")
else:
    print("Friendship")
