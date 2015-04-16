def e(a):
    if a%2:
        return int(((a+1)*2)-3)
    else:
        return a*2 
def f(a):
    if a%2:
        return int((a+1)*2-2)-3
    else:
        return int(a*2)-2
cases = input("")
for a in range(cases):
    a,b = [int(x) for x in raw_input("").split()]
    if a==b:
        print e(a)
    elif a-b==2:
        print f(a)
    elif a>10000 or b>10000:
        pass
    else:
        print "No Number"
#Did it! Some pattern guessing again!