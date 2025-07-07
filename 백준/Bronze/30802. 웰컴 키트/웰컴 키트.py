people = int(input())
shirt = list(map(int, input().split()))
set1, set2 = map(int, input().split())

total = 0
for i in shirt:
    total += (i + set1 - 1) // set1  # 정확한 티셔츠 팩 수 계산

print(total)

com1 = people // set2
com2 = people % set2
print(com1, com2, end=" ")