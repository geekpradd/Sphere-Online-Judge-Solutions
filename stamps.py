c = input()
v = 1
for x in range(c):
    d = True 
    needed, n = map(int, raw_input().split())
    data = sorted(map(int, raw_input().split()))
    for a in range(1,len(data)+1):
        f = data[-1*a:]
        if sum(f)>=needed:
            print "Scenario #%s:" % (str(v))
            print len(f) 
            d = False
            break 
    if d:
        print "Scenario #%s:" % (str(v)) 
        print "impossible"
    v+=1
#Solved 29 June 2015
#Python 2 to the win