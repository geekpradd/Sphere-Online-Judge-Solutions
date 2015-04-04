from math import sqrt 
import string
def primes(n):
    primeDict = {}
    for num in range(2,n+1):
        primeDict[num] = True 
    limit = int(sqrt(n))
    print (limit)
    for a in range(2, limit+1):
        for f in range(2,n+1):
            factor = a*f 
            if factor > n:
                break 
            else:
                primeDict[factor] = False 
    primes = []
    for a in range(2,n+1):
        if primeDict[a]:
            primes.append(a) 

    return primes 

#Helper module for pon.py