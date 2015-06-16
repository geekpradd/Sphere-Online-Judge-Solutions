cases = input("")
b = 0
for x in range(cases):
    b+=1
    l = raw_input("").split()
    n,s = int(l[0]),list(l[1])
    del s[n-1]
    print (str(b) + " " + ''.join(s))
