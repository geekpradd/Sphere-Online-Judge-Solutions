from itertools import combinations
cases = int(input())
for a in range(cases):
    s = input()
    x = combinations(map(int,raw_input().split()),2)
    sum = 0 
    for d in x:  
        sum += abs(d[0]-d[1]) 
    print (sum)
