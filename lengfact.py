from math import *
cases = int(input(""))
for a in range(cases):
    num = int(input(""))
    if num in [0,1]:
        print (1)
    else:
        print (int(ceil(lgamma(num+1)/log(10))))

#did it from some wikipedia research.. Dunno how the algorithm works