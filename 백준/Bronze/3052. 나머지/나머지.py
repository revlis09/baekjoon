a=[]
for _ in range(10):
  n=int(input())
  a.append(n%42)
new_list=[]
for num in a:
  if num not in new_list:
    new_list.append(num)
print(len(new_list))
