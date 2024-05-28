t = int(input())
out = []
for _ in range(t):
    n,m = map(int,input().split())
    out.append((n*2)+(m*4))
print(*out,sep = "\n")
