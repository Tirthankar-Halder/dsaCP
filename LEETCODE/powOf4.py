n=int(input())
for i in range(32):
    if i%2==0:
        if n&1!=0 and n==1:
            print("yupp")
            break
    else:
        if n&1!=0:
            print("no")
            break
    n=n>>1
