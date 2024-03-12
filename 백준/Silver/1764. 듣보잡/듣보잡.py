N, M = input().split()
N = int(N)
M = int(M)
lis = []
see = []
for i in range(0, N) :
    lis.append(input())
for j in range(0, M) :
    see.append(input())
lis.sort()
see.sort()
lis_see = []
i = 0
j = 0
while i < N and j < M :
    if lis[i] > see[j] :
        j += 1
    elif lis[i] < see[j] :
        i += 1
    else :
        lis_see.append(lis[i])
        i += 1
        j += 1
print(len(lis_see))
for a in range(0, len(lis_see)) :
    print(lis_see[a])
