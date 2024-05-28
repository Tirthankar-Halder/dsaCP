
t =int(input())
out = []
def func(lis1,lis2,i):
    if lis1[i] == lis2[i]:
        if i == (len(lis1)-1):
            out.append("TIE")
        else:
            func(lis1,lis2,i+1)
    elif lis1[i] > lis2[i] :
        out.append("DRAGON")
    elif lis1[i] < lis2[i]:
        out.append("SLOTH")
for i in range(t):
    lis1 = list(map(int,input().split()))
    lis2 = list(map(int,input().split()))
    if sum(lis1) == sum(lis2):
        func(lis1,lis2,0)
    elif sum(lis1) > sum(lis2):
        out.append("DRAGON")
    elif sum(lis1) < sum(lis2):
        out.append("SLOTH")
        
print(*out,sep = "\n")
