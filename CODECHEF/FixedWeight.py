out = []
t = int(input())
for  _ in range(t):
    n,x  = map(int,input().split())
    if n>=x:
        out.append("YES")
    else:
        if x>(n-1+1)*a
            out.append("NO")
        else:
            flag = 0
            for i in range(1,n+1):
                if x%i == 0:
                    if n-i+1>=(x/i):
                        flag = 1
                        break
            if flag: out.append("YES")
            else:out.append("NO")
print(*out,sep = "\n")