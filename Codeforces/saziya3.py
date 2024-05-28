n,m = map(int,input().split())
x = map(list,input().split())
new_list = []
while x:
    minimum = int(x[0])  # arbitrary number in list 
    for x in x: 
        if x < minimum:
            minimum = x
    new_list.append(minimum)
    x.remove(minimum)    

print(new_list)