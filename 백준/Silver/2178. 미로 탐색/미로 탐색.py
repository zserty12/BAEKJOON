from collections import deque

N, M = input().split()
N = int(N)
M = int(M)
miro = [list(map(int,input().rstrip())) for _ in range(N)]
miro_2 = [[0]*M]*N

dx = [-1,1,0,0]
dy = [0,0,-1,1]
queue = deque()
queue.append((0,0))
while queue:
    x,y = queue.popleft()
    #print(x,y)
    if x == N-1 and y == M-1:
        break
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if nx < 0 or nx >= N or ny < 0 or ny >= M:
            continue
        if miro[nx][ny] == 1:
            miro[nx][ny] = miro[x][y] + 1
            queue.append((nx,ny))

print(miro[N-1][M-1])
