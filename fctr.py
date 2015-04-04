import sys,functools
sys.setrecursionlimit(1000000000)

# def z(n):
#     r = str(factorial(n))[::-1]
#     diff = len(r) - len(str(int(r)))
#     return diff
def f1(n):
    if n==1:
        return n
    else:
        return n*factorial(n-1)

f2 = lambda x: reduce(lambda a,b:a*b,range(1,x+1))

# calls = raw_input("")
# for a in range(int(calls)):
#     n = int(raw_input(""))
#     print z(n)

def odd(l,h):
    p = 1 
    ml = l if l%2>0 else l+1 
    mh = h if h%2>0 else h-1 
    while ml<=mh:
        p = p*ml 
        ml +=2 
    return p 
def f3(k):
    f = 1 
    for i in range(1,k-1):
        f *= odd(3,2**(i+1)-1)
    return 2**(2**k-1)*f 

print(f3(15))