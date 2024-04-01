import sys
input = sys.stdin.readline

N = int(input())
grape = [0]*10001
for i in range(1,N+1):
    grape[i] = int(input())
dp = [0]*10001
dp[1] = grape[1]
dp[2] = grape[1]+grape[2]
for i in range(3,N+1):
    dp[i] = max(grape[i]+grape[i-1]+dp[i-3], grape[i]+dp[i-2], dp[i-1])
print(max(dp))