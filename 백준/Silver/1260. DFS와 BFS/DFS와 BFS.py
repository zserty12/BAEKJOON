def dfs(graph : dict, node : int, visited : list)->None:
    visited[node] = 1
    print(node, end = " ")
    for i in graph[node]:
        if visited[i] == 0:
            dfs(graph, i, visited)


def bfs(graph : dict, node : int)->list:
    need_visit, visited = [], []
    need_visit.append(node)
    while need_visit: 
        tmpnode = need_visit.pop(0)
        if tmpnode not in visited:
            visited.append(tmpnode)
            need_visit.extend(graph[tmpnode])
    return visited

import sys
input = sys.stdin.readline
N, M, v = map(int, input().split())
graph = {}
for i in range(1,N+1):
    graph[i] = []
for _ in range(M):
    tmpa, tmpb = map(int,input().split())
    graph[tmpa].append(tmpb)
    graph[tmpa].sort()
    graph[tmpb].append(tmpa)
    graph[tmpb].sort()
visited = [0]*(N+1)
dfs(graph, v, visited)
print("")
bfs_res = bfs(graph, v)
for b in bfs_res:
    print(b, end = " ")
    