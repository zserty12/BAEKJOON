import sys
input = sys.stdin.readline

N, M = map(int,input().split())
board = [list(input().rstrip()) for _ in range(N)]
b_1 = ['B','W','B','W','B','W','B','W']
b_2 = ['W','B','W','B','W','B','W','B']
board_1 = [b_1,b_2,b_1,b_2,b_1,b_2,b_1,b_2]
board_2 = [b_2,b_1,b_2,b_1,b_2,b_1,b_2,b_1]
min_cnt = 1250
for i in range(0,N-7):
    for j in range(0,M-7):
        cnt_1 = 0
        cnt_2 = 0
        for a in range(i,i+8):
            for b in range(j,j+8):
                if board[a][b] != board_1[a-i][b-j]:
                        cnt_1 += 1
                if board[a][b] != board_2[a-i][b-j]:
                        cnt_2 += 1
        cnt = min(cnt_1, cnt_2)
        if min_cnt > cnt:
            min_cnt = cnt
print(min_cnt)            