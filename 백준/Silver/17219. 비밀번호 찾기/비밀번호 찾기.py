N, M = map(int, input().split())
dic = {}
for i in range(0,N):
    tmpn, tmpm = input().split()
    dic[tmpn] = tmpm
password = []
for j in range(0,M):
    tmppass = input()
    password.append(tmppass)
for j in range(0,M):
    print(dic[password[j]])