f = [0] * 1000001
f[1] = 0
f[2] = 1
f[3] = 1
a = int(input())
for i in range(4,a+1):
    f[i] = f[i-1] + 1
    if i % 3 == 0 :
         f[i] = min(f[i], f[int(i/3)] + 1)
    if i % 2 == 0 : 
        f[i] = min(f[i], f[int(i/2)] + 1)
print(f[a])