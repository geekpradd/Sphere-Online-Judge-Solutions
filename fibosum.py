def fib(n, computed={0:0, 1:1}):
    if n not in computed:
        computed[n] = fib(n-1, computed) + fib(n-2, computed)
    return computed[n]
def fib_sum(m,n):
    return fib(m+2) - fib(n+2) - 2
cases = input('')
for a in range(cases):
    x,y = [int(a) for a in raw_input("").split()]
    
    print fib_sum(x,y)