from cv2 import split


t = int(input())
for _ in range(t):
    n= int(input())
    a = list(map(int,input().split()))
    flag=0
    for id in range(n-1):
        for idx in range(id+1,n):
            if (a[id]+a[idx] >= a[id]*a[idx]):
                # print(a[id],a[idx])
                flag+=1

    print(flag)            
