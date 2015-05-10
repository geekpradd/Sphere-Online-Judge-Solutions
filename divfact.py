from math import factorial
from functools import reduce
def factors(n):    
    return len(set(reduce(list.__add__, 
                ([i, n//i] for i in range(1, int(n**0.5) + 1) if n % i == 0))))
c = int(input(""))
for x in range(c):
    b = int(input(""))
    print (factors(factorial(b))%(1000000007))