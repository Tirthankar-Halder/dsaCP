a=int(input())
for i in range(a):
    string=input()
    if len(string)>10:
        print(string[0]+str(len(string)-2)+string[len(string)-1])
    else:
        print(string)
