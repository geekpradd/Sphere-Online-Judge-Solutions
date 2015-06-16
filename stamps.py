from itertools import combinations 
data = [13, 17, 42, 9, 23, 57]
def minimum(li,m):
    x = "impossible"
    for l in xrange(len(li)+1,1,-1):
        for sub in combinations(li,l):
            if sum(sub)>=m:
                x = l
    return x 
cases = input("")
for a in range(cases):
    ma, friends = [int(x) for x in raw_input("").split()]
    data = [int(x) for x in raw_input("").split()]
    print "Scenario #" + str(a+1) + ":"
    print minimum(data, ma), "\n"
#Python 2!