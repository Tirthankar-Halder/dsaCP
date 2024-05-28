n,m = map(int,input().split())
x = []
x = list(map(int,input().split()))
y = sorted(x)
flag = 0
print(y)
if n>m :
    for i in range(m):
        for j in range(n):
            x[i],x[i+j] = x[i+j],x[i]            
            print(x)
            print(i,j)
            if set(x) == set(y):
                break
            flag+=1
else:
    for i in range(n):
        for j in range(m):
            x[i],x[i+j] = x[i+j],x[i] 
            print(x)
            if set(x) == set(y):
                break
            flag+=1

print(flag)
                
