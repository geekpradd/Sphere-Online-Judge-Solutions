from math import factorial 

def combination(n,r):
    return factorial(n)/factorial(r)/factorial(n-r)

print (combination(100,50)%1000000007)