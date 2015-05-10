cases = input("")
for x in range(cases):
    h = set()
    n = input("")
    for a in range(n):
        h.add(input(""))
    l = tuple(sorted(h))
    print l
    x = True
    for index, val in enumerate(l):
        if index!=(len(l)-1):
            if str(val) in str(l[index+1]):
                x = False 
    if x:
        print "YES"
    else:
        print "NO"


#Python 2!!