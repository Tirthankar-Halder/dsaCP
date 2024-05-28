str1, ch=input().split()
freq=0
for s in str1:
    if s==ch:
        freq+=1
print(int((freq/len(str1))*100))

