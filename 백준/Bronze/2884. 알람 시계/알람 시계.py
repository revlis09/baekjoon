h, m=input().split()
h=int(h)
m=int(m)
sum=(h*60)+m
sum=sum-45
if sum < 0:
    sum += 24 * 60  
a=sum//60
b=sum%60
print(a, b)