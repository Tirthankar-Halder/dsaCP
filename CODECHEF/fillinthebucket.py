t = int(input())
out = []
for _ in range(t):
    k,x = map(int,input().split())
    out.append(k-x)
print(*out,sep = "\n")
