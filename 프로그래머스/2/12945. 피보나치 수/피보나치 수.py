def solution(n):
    dn = [0]*(n+1)
    dn[1] = 1
    for i in range(2,n+1):
        dn[i] = dn[i-1]+dn[i-2]
    return dn[n] % 1234567