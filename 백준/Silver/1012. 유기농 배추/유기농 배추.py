import sys
input = sys.stdin.readline
sys.setrecursionlimit(2500*4)

def dfs(x,y):
    dx = [-1,1,0,0]
    dy = [0,0,-1,1]
    
    if x >= 0 and x < N and y >= 0 and y < M and graph[x][y] == 1:
        graph[x][y] = 0
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            dfs(nx,ny)

T = int(input())
for _ in range(T):
    M, N, K = map(int,input().split())
    graph = []
    for i in range(N):
        graph.append([])
        for j in range(M):
            graph[i].append(0)
    for _ in range(K):
        i, j = map(int,input().split())
        graph[j][i] = 1
    cnt = 0
    for a in range(N):
        for b in range(M):
            if graph[a][b] == 1:
                cnt += 1
                dfs(a,b)
    print(cnt)
        
