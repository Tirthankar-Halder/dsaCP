t = int(input())
out = []
for i in range(t):
    n,m = map(int,input().split())
    if n > 3 and m > 3 and n==m:
        out.append("YES")
    else:
        out.append("NO")
print(*out,sep ="\n")

