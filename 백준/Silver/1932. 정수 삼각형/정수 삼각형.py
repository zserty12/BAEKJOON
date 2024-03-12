N = int(input())
tri = []
for i in range(0, N) :
    tri.append(list(map(int,input().split())))
if N == 1 :
    print(tri[0][0])
else :
    for i in range(1,N) :
        for j in range(0,i+1) :
            if j == 0 : 
                tri[i][j] += tri[i-1][j]
            elif j == i :
                tri[i][j] += tri[i-1][j-1]
            else :
                tri[i][j] += max(tri[i-1][j-1], tri[i-1][j])
    dis = 0
    for k in range(0,N) :
        if tri[N-1][k] > dis :
            dis = tri[N-1][k]
    print(dis)