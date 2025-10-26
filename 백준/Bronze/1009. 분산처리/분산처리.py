T = int(input())

for _ in range(T):
    a, b = map(int, input().split())
    a %= 10  # 1의 자리만 중요

    # 각 숫자의 패턴 정의
    pattern = {
        0: [10],
        1: [1],
        2: [2, 4, 8, 6],
        3: [3, 9, 7, 1],
        4: [4, 6],
        5: [5],
        6: [6],
        7: [7, 9, 3, 1],
        8: [8, 4, 2, 6],
        9: [9, 1],
    }

    p = pattern[a]
    result = p[(b - 1) % len(p)]  # b번째에 해당하는 값 선택
    print(result)
