msg = input()
res = ""
for i in range(len(msg)-1):
    if msg[i] ==msg[i+1]:
        res+=msg[i]
    else:
        
        res = ""
        res+=msg[i+1]
print(len(res))
print(res)
