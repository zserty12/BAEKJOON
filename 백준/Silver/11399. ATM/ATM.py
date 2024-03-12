N = int(input())
num = list(map(int, input().split()))
num.sort()
min_val = 0
for k in range(1,N+1):
    min_val += sum(num[0:k])
print(min_val)