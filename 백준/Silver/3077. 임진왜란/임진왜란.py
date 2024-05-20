import sys 
input = sys.stdin.readline
from itertools import combinations

N = int(input())
answer = input().split(" ")
submit = input().split(" ")
answer[N-1] = answer[N-1].replace("\n","")
submit[N-1] = submit[N-1].replace("\n","")
dic = {}
for i in range(N):
    dic[answer[i]] = i + 1
arr = []
for i in range(N):
    arr.append(dic[submit[i]])
res = []
res = res + list(combinations(arr,2))
cnt = 0
for i in range(len(res)):
    if (res[i][0] < res[i][1]):
        cnt += 1
print("%d/%d" %(cnt,len(res)))