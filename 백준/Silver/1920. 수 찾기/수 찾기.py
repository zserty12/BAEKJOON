N = int(input())
A = list(map(int, input().split()))
M = int(input())
num = list(map(int,input().split()))
A.sort()
check = [0]*M
for i in range(M):
    left = 0
    right = N-1
    while left < right:
        mid = (left + right) // 2
        if num[i] > A[mid]:
            left = mid + 1
        elif num[i] < A[mid]:
            right = mid - 1
        else:
            check[i] = 1
            break
    if num[i] == A[right]:
        check[i] = 1
for a in check:
    print(a)