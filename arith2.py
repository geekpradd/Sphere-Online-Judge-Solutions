cases = int(input("")) 
while cases:
    l = raw_input("").split()
    if not len(l):
        continue
    while len(l)>2:
        
        value = eval(''.join(l[:3:]))
        del l[:3:]
        l.insert(0,str(value))
    print l[0]
    
    cases-=1

#Python 2: Simple coding