from re import findall
s=input()
ans=0
ansB=0
mtch=findall("G{2,}",s)
mtch2=findall("B{2,}",s)
for i in mtch:
    ans+=len(i)-1
for i in mtch2:
    ansB+=len(i)-1
print(max(ansB,ans),end ="")
