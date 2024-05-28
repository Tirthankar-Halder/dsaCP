n = input()

for id in n:
    print(id)
    if id != 4 or id != 7:
        flag=1
        break


if flag == 1:
    print("YES")
else:
    print("NO")