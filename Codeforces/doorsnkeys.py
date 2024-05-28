from unittest import result


n = int(input())
res = []
for i in range(n):
    s = input()
    out  =  ''
    flag = 0
    for ele in s:
        if ele.isupper():
            if ele.lower() not in out:
                flag=1
        else:
            out =  out + ele
    if flag == 0:
        res.append("YES")
    else:
        res.append("NO")
[print(ele)for ele in res]

        