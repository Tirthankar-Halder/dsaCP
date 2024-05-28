import random
t =int(input())
out = []
for _ in range(t):
    x,y = map(int,input().split())
    for id in range(y):
        x = x + int(random.choice([-1,1]))
    if x%2==0:
        out.append("Janmansh")
    else:
        out.append("Jay")
print(*out,sep = "\n")

