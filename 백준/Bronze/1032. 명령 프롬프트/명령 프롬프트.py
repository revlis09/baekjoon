n = int(input())
files = [input().strip() for _ in range(n)]

pattern = list(files[0])  # 첫 파일 이름 기준으로 시작

for i in range(1, n):
    for j in range(len(files[i])):
        if pattern[j] != files[i][j]:
            pattern[j] = '?'

print(''.join(pattern))
