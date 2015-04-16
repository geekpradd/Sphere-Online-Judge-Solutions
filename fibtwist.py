def fibo(n):
    if n in [0,1]:
        return n
    else:
        return fibo(n-1) + fibo(n-2) + (n-1)
cases = input('')
for a in range(cases):
    y,z= [int(x) for x in raw_input("").split()]
    print fibo(y)%z