def sum(N) :
    res = N
    while N > 0 :
        remainder = N % 10
        res += remainder
        N = N // 10
    return res

num = [0]*10001
for i in range(1, 10001) :
    temp = sum(i)
    if temp > 10000 :
        continue
    num[temp] = 1
for i in range(1, 10001) :
    if num[i] == 0 :
        print(f"{i}")