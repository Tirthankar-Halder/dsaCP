a,b = map(int,input().split())
flag =0 
while(a<=b):
    a = 3*a
    b = 2*b
    flag+=1
print(flag)
