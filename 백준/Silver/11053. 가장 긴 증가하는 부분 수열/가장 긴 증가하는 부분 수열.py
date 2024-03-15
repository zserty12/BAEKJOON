N = int(input())
num = list(map(int,input().split()))
dis = [1]*N
for i in range(1,N):
    for j in range(0,i):
        if num[i] > num[j]:
            dis[i] = max(dis[i], dis[j]+1)
print(max(dis))