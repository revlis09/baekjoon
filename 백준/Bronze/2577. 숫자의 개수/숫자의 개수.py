a=input()
b=input()
c=input()
a=int(a)
b=int(b)
c=int(c)
total=a*b*c
result=str(total)
count=[0]*10
for i in result:
  count[int(i)]+=1
for j in count:
  print(j)