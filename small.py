def gcd(a,b):
    if not b:
        return a
    return gcd(b,a%b) 
def lcm(a,b):
    return a*b/gcd(a,b) 
def l(array):
    return reduce(lcm,array) 
c = int(input())
while c:
    n = raw_input()
    if not n:
       continue
    n = int(n)
    print l(range(1,n+1)) % 1000000007
    c-=1