
t = int(input())
outlist = []
for i in range(t):
    n,k = map(int,input().split())
    lis = list(map(int,input().split()))
    out = ''
    for j in lis:
        if j>k:
            out = out + "0"
        elif j<=k:
            out = out + "1"
            k = k-j
    outlist.append(out)
print(*outlist,sep = "\n")

        



