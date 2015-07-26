def fib(n):
    if n <= 1:
        return n
    return fib(n-1) + fib(n-2)

def analyse():
    for x in range(0,31):
        print (fib(x)%10)

analyse()
