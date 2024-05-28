x =121
if(x<0):
    print(0)
str_x = str(x)
reverse_str_x = ""
for i in str_x:
    reverse_str_x = i + reverse_str_x
print(reverse_str_x)
# temp =x
# nums = []
# while temp!=0:
#     nums.append(temp%10)
#     temp//=10
# # nums.reverse()
# s = ''
# for digits in nums:
#     s =s+str(digits)
if str_x==reverse_str_x:
    print(1)
else:
    print(0)