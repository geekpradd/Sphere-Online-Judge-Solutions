c = int(input())
while c:
    v = raw_input()
    if not v:
        continue 
    x = map(int, v.split())
    if not max(x):
        print "uncertain"
        c-=1
        continue
    list1 = map(int, raw_input().split()) 
    list2 = map(int, raw_input().split())
    while len(list1) and len(list2):
        m1, m2 = map(min, [list1, list2]) 
        if m1 < m2:
            del list1[list1.index(m1)]
        else:
            del list2[list2.index(m2)]
    print "Godzilla" if len(list1) else "MechaGodzilla"    
    c-=1