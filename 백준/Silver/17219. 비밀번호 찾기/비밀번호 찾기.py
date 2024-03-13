import sys
input = sys.stdin.readline
N, M = map(int, input().split())
dic = {}
for i in range(0,N):
    tmpn, tmpm = input().split()
    dic[tmpn] = tmpm
for j in range(0,M):
    print(dic[input().rstrip()])