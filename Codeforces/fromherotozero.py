t = int(input())
out = []
for i in range(t):
    n,k= map(int,input().split())
    flag = 0
    while n!=0:
        if n%k == 0:
            n = n/k
        else:
            n = n-1
        flag +=1
    out.append(flag)
[print(ele)for ele in out]