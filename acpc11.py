from itertools import product
def c(a):
    return abs(a[0]-a[1])
cases = input("")
for a in range(cases):
    f = ([int(x) for x in raw_input("").split()][1::])
    d = ([int(x) for x in raw_input("").split()][1::])
    print min([c(x) for x in product(f,d)])