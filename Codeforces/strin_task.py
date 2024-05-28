s = input()
vow = "aeiouyAEIOUY"
out = ""


for id in s:
    if id not in vow:
        out += '.'+id
out = out.lower()
print(out)