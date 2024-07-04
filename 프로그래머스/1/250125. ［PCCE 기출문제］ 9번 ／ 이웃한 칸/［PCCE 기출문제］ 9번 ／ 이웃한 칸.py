def solution(board, h, w):
    answer = 0
    dx = [-1,1,0,0]
    dy = [0,0,-1,1]
    for i in range(4):
        X = h + dx[i]
        Y = w + dy[i]
        if 0 <= X < len(board) and 0 <= Y < len(board):
            if board[h][w] == board[X][Y]:
                answer += 1
    return answer