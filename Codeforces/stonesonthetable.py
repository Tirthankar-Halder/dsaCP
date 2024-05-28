n = int(input())
s = input()
out = ""
idx = ""
flag = 0
for id in s:
    if idx == id:
        continue
    else:
        out = out + id
        flag+=1
    idx = id
print(n-flag)
     
