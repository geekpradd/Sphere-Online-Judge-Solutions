from itertools import combinations 
difference = lambda a,b: abs(a-b)
   
a,b = [int(x) for x in raw_input("").split()]
li = [int(raw_input("")) for x in range(a)] 
print([difference(x[0],x[1]) for x in combinations(li,2)].count(b))


