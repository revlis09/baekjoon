n=int(input())
for i in range(n):
  num=list(input())
  count=0
  total=0
  for j in num:
    if j=="O":
      total+=1
      count+=total
    if j=="X":
      total=0
  print(count)