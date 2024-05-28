import queue


n,t = map(int,input().split())
line = input()
line = list(line)

j=0
for i in range(n):
    if i == (t-1):
        if line[j] == 'B':
            temp = line[j]
            line[j] = line[j+1]
            line[j+1] = temp
            j+=2
        j+=1   
        if j>=4:
            break
out = ''
out.join(line)
print(out)


