a=input()
a=int(a)
num=list(map(int, input().split()))
n=len(num)
max=num[0]
min=num[0]
for i in range(1, n):
  if num[i]>max:
    max=num[i]
  elif num[i]<min:
    min=num[i]

print(min, max)
