c = int(input())
while c:
    n = raw_input() 
    if not n:
        continue 
    t = int(n) 
    values = [input() for x in range(t)] 
    avg = sum(values)%len(values)
    print "YES" if not avg else "NO"
    c-=1