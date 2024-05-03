import sys
input = sys.stdin.readline
import heapq

N = int(input())
lheap = []
rheap = []
for i in range(N):
    num = int(input())
    if len(lheap) == len(rheap):
        heapq.heappush(lheap, (-num,num))
    else:
        heapq.heappush(rheap, (num,num))
    
    if rheap and lheap[0][1] > rheap[0][0]:
        min = heapq.heappop(rheap)[0]
        max = heapq.heappop(lheap)[1]
        heapq.heappush(lheap, (-min,min))
        heapq.heappush(rheap, (max,max))
    print(lheap[0][1])