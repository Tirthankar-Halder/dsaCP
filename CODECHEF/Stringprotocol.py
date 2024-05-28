t = int(input())
out = []
for _ in range(t):
    n = int(input())
    s = input() 
    flag = 0
    i=1
    for id in range(0,n,i):
        print(i)
        if id+1 <n:
            if s[id]==s[id+1]:
                flag+=1
                i=2
            else:
                flag+=1
                if i>1:
                    i=1
        else:
            break
    out.append(flag)
print(*out,sep="\n")  
