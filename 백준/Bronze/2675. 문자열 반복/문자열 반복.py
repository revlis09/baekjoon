n=input()
n=int(n)
for i in range(n):
  a=list(input().split())
  num=a[0]
  text=a[1]
  text_str=str(text)
  for j in text_str:
    result= str(j) * int(num)
    print(result, end="")
  print()