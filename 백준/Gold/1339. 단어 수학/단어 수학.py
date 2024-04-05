import sys
input = sys.stdin.readline

N = int(input())
alpha = []
for _ in range(N):
    alpha.append(input().strip())
dic = {}
for i in range(N):
    length = len(alpha[i])
    for j in range(length):
        if alpha[i][j] not in dic:
            dic[alpha[i][j]] = 10**(length-j-1)
        else:
            dic[alpha[i][j]] += 10**(length-j-1)
alpha_num = []*len(dic)
for key,val in dic.items():
    alpha_num.append(val)
alpha_num.sort()
alpha_num=sorted(alpha_num,reverse=True)
num = 9
sum = 0
for i in range(len(alpha_num)):
    sum += num*alpha_num[i]
    num -= 1
print(sum)
