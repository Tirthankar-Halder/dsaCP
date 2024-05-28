n = int(input())
s = input()
out = ''
id = ''
for ele in s:
    if id != ele:
        out = out + ele
        id = ele
    else:
        continue
print(len(out))