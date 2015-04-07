def tobase(num, base):
    if base>10:
        m = "0123456789ABCDEF"
        if num<base:
            return m[num]
        return tobase(num//base, base) + m[num%base]
    else:
        if num<base:
            return str(num)
        return tobase(num//base, base) + str(num%base)
def length(n):
    return len(n)<=7
def frombase(string, base):
    m = {b:a for a,b in enumerate("0123456789ABCDEF")}
    n = 0
    for d in string:
        n = base*n+m[d]
    return n 
def base_conv(string, f,to):
    return tobase(frombase(string,f), to)

while True:
    try:
        #Solved it in Python 3.. 0.02 seconds!
        text = input("")
        data = text.split()
        base = base_conv(data[0], int(data[1]), int(data[2]))
        if length(base):
            print (base.rjust(7))
        else:
            print("ERROR".rjust(7))
    except EOFError:
        break
