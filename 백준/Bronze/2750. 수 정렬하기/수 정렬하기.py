n=int(input())
a=[]
for i in range(n):
    x=int(input())
    a.append(x)

na=len(a)
min=0
for i in range(na):
  min=i
  for j in range(i+1, na):
    if a[min]>a[j]:
      min=j
  a[min], a[i]=a[i], a[min]


for i in a:
  print(i)   