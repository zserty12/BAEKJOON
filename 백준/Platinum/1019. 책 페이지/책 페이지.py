N = int(input())
nums = [0]*10
a = 1
while N > 0:
    if N % 10 != 9:
        while N % 10 != 9:
            for i in range(len(str(N))):
                nums[int(str(N)[i])] += a
            N -= 1
    if N < 10:
        for i in range(N+1):
            nums[i] += a
    else:
        div = N // 10
        for i in range(10):
            nums[i] += (div+1)*a
    nums[0] -= a
    a *= 10
    N //= 10

for a in nums:
    print(a, end = " ")