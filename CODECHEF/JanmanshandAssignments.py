t =int(input())
out = []
for _ in range(t):
    x = int(input())
    if x+3 >10:
        out.append("NO")
    elif x+3 <= 10:
        out.append("YES")
print(*out,sep = "\n")
        
