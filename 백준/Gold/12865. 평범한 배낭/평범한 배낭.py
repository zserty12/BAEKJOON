import sys 
input = sys.stdin.readline

N, K = map(int,input().split())
price = [0]
weight = [0]
for _ in range(N):
    i, j = map(int,input().split())
    price.append(j)
    weight.append(i)

P = [[0]*(K+1) for _ in range(N+1)]
for i in range(1,N+1):
    for ww in range(1,K+1):
        if weight[i] <= ww:
            tmp = price[i] + P[i-1][ww-weight[i]]
            if tmp > P[i-1][ww]:
                P[i][ww] = tmp
            else:
                P[i][ww] = P[i-1][ww]
        else:
            P[i][ww] = P[i-1][ww]
print(P[N][K])    
