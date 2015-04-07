import re
from itertools import groupby
def split_upper(s):
    return filter(None, re.split("([A-Z][^A-Z]*)", s))

#Love Python! Regular Expressions did it!
while True:
    try:
        b = True
        data = raw_input("")
        dic = {len(list(g)):k for k, g in groupby(data) if k=="_"}
        for key in dic:
            if key>1:
                print("Error!")
                b = False 
        if b:
            if not len(data):
                print("Error!")
            elif ("_" in data and any(x.isupper() for x in data)) or (data[0].isupper()) or (data[0]=="_") or (data[-1]=="_") or (data[0].isdigit()) or (not re.match("^[A-Za-z0-9_-]+$", data)):
                print ("Error!")
            else:
                if "_" in data:
                    d = data.split("_")
                    a,b = d[0],d[1::]
                    c = [a] + [x.capitalize() for x in b]
                    print ('').join(c)
                elif any(x.isupper() for x in data):
                    print ('_'.join([x.lower() for x in split_upper(data)]))
                else:
                    print(data)
            
    except EOFError:
        break