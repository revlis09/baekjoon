number=map(int, input().split())
sum=0
for i in number:
  sum += i**2
print(sum%10)