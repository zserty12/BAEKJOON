import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)
N = int(input())
tree = [[] for _ in range(N+1)]
for _ in range(N-1):
    i, j = map(int,input().split())
    tree[i].append(j)
    tree[j].append(i)
parent = [0]*(N+1)
def dfs(x):
    for i in tree[x]:
        if parent[i] == 0:
            parent[i] = x
            dfs(i)
dfs(1)
for i in range(2,N+1):
    print(parent[i])
    