t = int(input())
arr= [ "normal","huge","small"];

for _ in range(t):
    flag = 0
    x=int(input())
    for __ in range(x):
        flag+=1
        if flag>2:
            flag =0
    print(arr[flag])
