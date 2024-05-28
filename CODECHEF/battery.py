t = int(input())
lis = []
for i in range(t):
    x = int(input())
    if x <= 15 :
        lis.append("YES")
    else:
        lis.append("NO")
print(*lis,sep = "\n")