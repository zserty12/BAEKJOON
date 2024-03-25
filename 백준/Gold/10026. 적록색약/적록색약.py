import sys
input=sys.stdin.readline
sys.setrecursionlimit(10**5)

N = int(input())
graph = [list(input().rstrip()) for _ in range(N)]
visited = [[0]*N for _ in range(N)]
cnt_1 = 0
cnt_2 = 0
dx = [-1,1,0,0]
dy = [0,0,-1,1]

def dfs(x,y):
    visited[x][y] = 1
    C = graph[x][y]
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if nx >=0 and nx < N and ny >= 0 and ny < N:
            if visited[nx][ny] == 0 and graph[nx][ny] == C:
                dfs(nx,ny)
                
for i in range(0,N):
    for j in range(0,N):
        if visited[i][j] == 0:
            dfs(i,j)
            cnt_1 += 1
 
for i in range(N):
    for j in range(N):
        visited[i][j] = 0
        if graph[i][j] == 'G':
            graph[i][j] = 'R'      

        
for i in range(0,N):
    for j in range(0,N):
        if visited[i][j] == 0:
            dfs(i,j)
            cnt_2 += 1

print(cnt_1, cnt_2)