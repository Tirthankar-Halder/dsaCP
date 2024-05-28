from itertools import permutations


t = int(input())

for id in range(t):
    out = []
    n = int(input())
    list1 = list(range(1,n+1))
    perm = permutations(list1)
    for id in perm:    
        result  =0
        for i in range(len(id)):
            if i == len(id)-1:
                break
            elif i==0:
                result = abs(id[i] - id[i+1])
            else:
                result = result ^ abs(id[i] - id[i+1]) 
            if result == 0:
                out.append(id)
                break
            else:
                out.append("-1")
                break

    

print(out)

    
        