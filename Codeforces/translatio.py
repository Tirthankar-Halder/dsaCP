s = input()
t = input()
out = ''
lis = list(s)

for id in reversed(lis):
    out = out +id
if t == out:
    print("YES")
else:
    print("NO")