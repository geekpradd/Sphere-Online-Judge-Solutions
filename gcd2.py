def gcd(a,b):
    if not b:
        return a
    return gcd(b,a%b) 
def lcm(a,b):
    return a*b/gcd(a,b)
# cases = int(input())
# for a in range(cases):
#     x,y = map(int, input("").split())
#     print(gcd(x,y))
def l(array):
    return reduce(lcm,array) 
print (l(range(1,6)))