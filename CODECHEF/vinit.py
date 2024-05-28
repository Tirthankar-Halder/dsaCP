n = int(input())
list1 = []
list1 = [int(input()) for _ in range(n)]
result = 0
flag = 0
# for __ in range(n,-1):
#     result+= list1[n-1] 
#     if result >= 0:
#         flag = n
#         break
    
if flag!=0:
    print(flag)
else:
    print("0")
newlist = []
if n%2==0:
    for i in range(n/2):
        result += (list1[i]+list1[n-1-i])
        newlist.append(list1[i])
        newlist.append(list1[n-1-i])
        if result = 0:
            break
    

