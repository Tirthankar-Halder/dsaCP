t = int(input())
out = []
for id in range(t):
    flag = 0

    idx = list(map(int,input().split()))
    for i in range(1,idx[0]+1):
        for j in range(1,idx[1]+1):
            if (i+j)%2==0:
                flag +=1
    out.append(flag)
print(out,sep="\n")


