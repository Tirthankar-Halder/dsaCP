# cook your dish here

t = int(input())
out = []
for _ in range(t):
    x,a,b,c = map(int,input().split())
    result = 0
    list1= [a,b,c]
    lowest = list1[0]
    lowest2 = None 
    for id in list1[1:]:
        if id<lowest:
            lowest2= lowest
            lowest = id
        elif lowest2 == None or lowest2 >id:
            lowest2 =id
    for __ in range(x-1):
        result += lowest

    result += lowest2 
    out.append(result)
print(*out,sep = "\n")

