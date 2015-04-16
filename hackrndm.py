from itertools import combinations 
difference = lambda a,b: abs(a-b)

while True:
    try:    
        a,b = [int(x) for x in raw_input("").split()]
        li = [int(x) for x in raw_input("").split()] 
        print([difference(x[0],x[1]) for x in combinations(li,2)].count(b))
    except EOFError:
        break