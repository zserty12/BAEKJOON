N = int(input())
stair = [0]*(301)
for i in range(1,N+1):
    stair[i] = int(input())
dp = [0]*(301)
dp[1] = stair[1]
dp[2] = stair[1]+stair[2]
dp[3] = max(stair[1]+stair[3], stair[2]+stair[3])
for n in range(4,N+1):
    dp[n] = max(dp[n-3]+stair[n-1]+stair[n], dp[n-2]+stair[n])
print(dp[N])

