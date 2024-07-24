import sys
input = sys.stdin.readline

N = int(input())
for _ in range(N):
    phone_book = []
    M = int(input())
    for _ in range(M):
        tmp = input().rstrip()
        phone_book.append(tmp)
    phone_book.sort()
    flag = 0
    for p1, p2 in zip(phone_book,phone_book[1:]):
        if p2.startswith(p1):
            flag = 1
            break
    if flag == 1:
        print('NO')
    else:
        print('YES')