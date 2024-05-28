t = int(input())
out = []
for id in range(t):
    ttime= 0
    
    idf = 0
    n,p,x,y = map(int,input().split())
    list1 = list(map(int,input().split()))
    for idx in list1:
        if idf == p :
            break
        elif idx == 0:
            ttime = ttime + x
        elif idx == 1:
            ttime = ttime + y
        idf+=1
    out.append(ttime)

print(*out,sep = "\n")
