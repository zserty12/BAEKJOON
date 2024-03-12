N = int(input())
num = list(map(int, input().split()))
num.sort()
min = [0]*N
for i in range(0,N):
    for j in range(0,i+1) :
        min[i] += num[j]
min_val = 0
for k in range(0,N):
    min_val += min[k]
print(min_val)
