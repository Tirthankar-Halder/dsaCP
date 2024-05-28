t = int(input())
for i in range(t):
    n = int(input())
    ls = map(int,input().split())
    out = []
    for id in ls:
        if id not in out:
            out.append(id)
    for idx in out:
        index = out.index(idx)
        #print(index)
        # if index.count() == 1:
        #     print(index)
    out.clear()




