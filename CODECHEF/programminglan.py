t = int(input())
out =[]
for i in range(t):
    lis = list(map(int,input().split()))
    if lis[0] == lis[2] and lis[1] == lis[3] or lis[0] == lis[3] and lis[1] == lis[2]:
        out.append(1)
    elif lis[0] == lis[4] and lis[1] == lis[5] or lis[0] == lis[5] and lis[1] == lis[4]:
        out.append(2)
    else:
        out.append(0)
print(*out,sep = "\n")