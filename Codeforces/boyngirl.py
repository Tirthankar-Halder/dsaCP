s = input()
out = ""
for id in s:
    if id not in out:
        out = out+id
if len(out)%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")