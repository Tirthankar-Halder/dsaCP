k,n,w = map(int,input().split())
id = 0
for i in range(1,w+1):
    id = id + i*k
if id>n:print(id-n)
else:print(0)