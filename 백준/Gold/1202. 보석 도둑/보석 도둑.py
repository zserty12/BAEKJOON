import sys
input = sys.stdin.readline
import heapq

N, K = map(int, input().split())
jew = []
for _ in range(N):
    heapq.heappush(jew, list(map(int, input().split())))
bag = []
for _ in range(K):
    bag.append(int(input()))
bag.sort()

res = 0
tmp = []
for a in bag:
    while jew and a >= jew[0][0]:
        heapq.heappush(tmp, -heapq.heappop(jew)[1])
    if tmp:
        res -= heapq.heappop(tmp)
    elif not jew:
        break
print(res)
