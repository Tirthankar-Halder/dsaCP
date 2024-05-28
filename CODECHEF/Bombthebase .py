t = int(input())
out = []
for _ in range(t):
    flag = 0
    n,x = map(int,input().split())
    a = list(map(int,input().split()))
    for i in range(len(a)):
        if a[i]<x:
            flag = i+1
    out.append(flag)   
print(*out,sep="\n")  
