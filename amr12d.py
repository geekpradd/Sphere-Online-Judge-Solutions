def consecutive_groups(iterable):
    s = tuple(iterable)
    for size in range(1, len(s)+1):
        for index in range(len(s)+1-size):
            yield iterable[index:index+size] 
def main(string):
    for x in consecutive_groups(string):
        if not x[::-1] in string:
            return "NO"
    return "YES"
cases = int(input(""))
for a in range(cases):
    v = raw_input("")
    print main(v) 
#Done .. Easy