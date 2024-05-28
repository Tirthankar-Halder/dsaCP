s = input()
ls = list(s)
out = ""
if ls[0].isupper():
    out = out.join(ls)
else:
    ls[0] = ls[0].upper()
    out = out.join(ls)
print(out)
