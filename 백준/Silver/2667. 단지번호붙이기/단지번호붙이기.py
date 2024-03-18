import sys
input = sys.stdin.readline

N = int(input())
graph = []
cnt = 0
res = []
for _ in range(N):
    graph.append(list(map(int,input().rstrip())))
dx = [-1,1,0,0]
dy = [0,0,-1,1]

def dfs(x,y):
    global cnt
    if x < 0 or x >= N or y < 0 or y >= N:
        return False
    
    if graph[x][y] == 1:
        cnt += 1
        graph[x][y] = 0
        for i in  range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            dfs(nx,ny)
        return True
    return False

for i in range(N):
    for j in range(N):
        if graph[i][j] == 1:
            dfs(i,j)
            res.append(cnt)
            cnt = 0
print(len(res))
res.sort()
for a in res:
    print(a)               