place_value_map = lambda x: int("1" + "0"*x)
def get_list(string):
    return ( (a, string.index(a)) for a in ['m', 'c', 'x', 'i'] if a in string)
def from_mcxi(string):
    total = 0 
    m = {'m':1000, 'c':100, 'x':10, 'i':1}
    for item, index in get_list(string):
        if index:
            if string[index-1].isdigit():
                total+=int(string[index-1])*m[item]
            else:
                total+=m[item]
        else:
            total+=m[item]
    return total 
def to_mcxi(string):
    out = []
    m = {1000: 'm', 100:'c', 10:'x', 1:'i'}
    for index,digit in enumerate(reversed(string)):
        if int(digit)>=1:
            th = place_value_map(index) 
            char = m[place_value_map(index)]
            if int(digit)==1:
                out.insert(0,char) 
            else:
                out.insert(0,digit+char)
    return ''.join(out)
cases = input("")
for a in range(cases):
    txt = raw_input("").split()
    b,c = txt[0], txt[1]
    print (to_mcxi(str(from_mcxi(b)+from_mcxi(c))))

#I did it! In 0.05 seconds.. C implementation could have been faster
#but the ease of Python is what that matters!

