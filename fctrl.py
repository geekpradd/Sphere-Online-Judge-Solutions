from math import factorial 
from itertools import groupby 
def z(n):
    l = [[k,len(list(g))] for k, g in groupby(str(n))]
    if not l[-1][0] == "0":
        return 0 
    else:
        return l[-1][-1]
cases = int(input(""))
for a in range(cases):
    num = int(input(""))
    print (z(factorial(num)))