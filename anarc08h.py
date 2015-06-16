while True:
    x = raw_input("").split()
    n, d = int(x[0]), int(x[1])-1
    if not n:
        break
    chairs = list(range(1,n+1))
    while (len(chairs)!=1):
        if d>len(chairs)-1:
            del chairs[d%len(chairs)]
            print chairs
        else:
            first = chairs[d+1::] #4,5
            second = chairs[:d:] 
            del chairs[d]
            chairs = first + second
            print chairs
    print n, d+1, chairs[0]

