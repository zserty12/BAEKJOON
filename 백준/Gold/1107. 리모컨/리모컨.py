import sys
input = sys.stdin.readline

N = int(input())
M = int(input())
if M != 0 :
    noop = set(input().split())
else:
    noop = set()

min_cnt = abs(100 - N)
for num in range(1000001):
    for n in str(num):
        if n in noop:
            break
    else:
        min_cnt = min(min_cnt, len(str(num)) + abs(num-N))
print(min_cnt)
        