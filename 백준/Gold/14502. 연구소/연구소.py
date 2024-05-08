from collections import deque
import copy
import sys
input = sys.stdin.readline

N, M = map(int, input().split())
lab = []
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs():
    queue = deque()
    graph = copy.deepcopy(lab)
    for i in range(N):
        for j in range(M):
            if graph[i][j] == 2:
                queue.append((i,j))
    
    while queue:
        (x,y) = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if nx < 0 or ny < 0 or nx >= N or ny >= M:
                continue
            if graph[nx][ny] == 0:
                graph[nx][ny] = 2
                queue.append((nx,ny))
                
    global max_res
    cnt = sum(row.count(0) for row in graph)
    max_res = max(max_res, cnt)    
    
    
def makewall(cnt):
    if cnt == 3:
        bfs()
        return
    for i in range(N):
        for j in range(M):
            if lab[i][j] == 0:
                lab[i][j] = 1
                makewall(cnt+1)
                lab[i][j] = 0    
                
for i in range(N):
    lab.append(list(map(int,input().split())))
max_res = 0
makewall(0)
print(max_res)
