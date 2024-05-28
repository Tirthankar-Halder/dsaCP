n = int(input())
id = 0
a =[]
b = []
pas = []
for i in range(n):
    ix,iy = map(int,input().split())
    a.append(ix)
    b.append(iy)
    id = id + iy - ix
    pas.append(id)
print(max(pas))