n=int(input())
count=0
for i in range(n):
    string=input()
    string_2_list=string.split()
    response=''.join(string_2_list)
    if '11' in response or '111' in response or '101' in response:
        count+=1
    else: pass
print(count)