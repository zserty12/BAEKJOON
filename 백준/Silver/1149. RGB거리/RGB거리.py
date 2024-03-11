N = int(input())
price = []
for i in range(0, N) :
    price.append(list(map(int, input().split())))

cost = [[0] * 3 for a in range(N)]

cost[0][0] = price[0][0]
cost[0][1] = price[0][1]
cost[0][2] = price[0][2]
for j in range(1, N) :
    cost[j][0] = min(cost[j-1][1] + price[j][0], cost[j-1][2] + price[j][0])
    cost[j][1] = min(cost[j-1][0] + price[j][1], cost[j-1][2] + price[j][1])
    cost[j][2] = min(cost[j-1][0] + price[j][2], cost[j-1][1] + price[j][2])
print(min(cost[N-1][0], cost[N-1][1], cost[N-1][2]))
    
