from itertools import permutations as p
def gcd(a,b):
    if not b: return a
    return gcd(b,a%b)
while True:
    try:
        n=input("")
        print reduce(gcd,[int(''.join(x)) for x in p(str(n))])
    except EOFError:
        break