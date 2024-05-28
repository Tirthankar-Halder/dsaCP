n,m = map(int,input().split())
q = list(map(int,input().split()))
for _ in range(m):
    c,x = map(int,input().split())
    list1 = list(map(int,input().split()))
    val = 0
    for __ in range(x):
        q[c-1] = q[c-1] + (list1[c-1]*q[c-1])
    q[c-1] = 
