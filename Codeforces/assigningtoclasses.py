
for _ in[0]*int(input()):
    n=int(input())
    a=sorted(map(int,input().split()))
    print(a[n]-a[n-1])