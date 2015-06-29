cases = int(input())
for x in range(cases):
    no = int(input())
    s = raw_input()
    #Get all substrings of length 3.. Since max last
    #index can be 40, range(38) is used as max(range(38)) + 4 = 40
    c = [s[x:x+3] for x in range(38)]
    i = ["TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"] 
    #Count occurences
    o = [str(c.count(x)) for x in i]
    #Print it out
    print no, " ".join(o)
#Solved 29 June 2015
#@pradipta.. Awesome!