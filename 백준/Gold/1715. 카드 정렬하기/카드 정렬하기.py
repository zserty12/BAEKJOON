import sys 
input = sys.stdin.readline
import heapq

N = int(input())
heap = []
for i in range(N):
    heapq.heappush(heap, int(input()))
total = 0
while len(heap) > 1:
    a = heapq.heappop(heap)
    b = heapq.heappop(heap)
    sum = (a+b)
    total += sum
    heapq.heappush(heap, sum)
print(total)