t = int(input())
out = []
for _ in range(t):
    x,y = map(int,input().split())
    out.append((10*x)+(y*5))
print(*out,sep = "\n")
