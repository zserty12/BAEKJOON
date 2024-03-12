N = int(input())
fib = [0] * (N+1) 
if N == 1 :
    fib[1] = 1
    print(fib[1])
else :
    fib[1] = 1
    for i in range(2,N+1) :
        fib[i] = fib[i-1] + fib[i-2]
    print(fib[N])