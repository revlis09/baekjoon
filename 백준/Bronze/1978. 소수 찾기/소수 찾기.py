n=int(input())
new=list(map(int,input().split()))
count=0
for i in new:
  if i<2:
    continue
  for j in range(2, i):
    if i%j==0:
      break
  else:
    count+=1
print(count)