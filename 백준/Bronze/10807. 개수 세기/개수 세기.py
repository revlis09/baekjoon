n = int(input())  
a = list(map(int, input().split()))  
b = int(input())  
count = 0

for i in a:
    if b == i:
        count += 1

print(count)
