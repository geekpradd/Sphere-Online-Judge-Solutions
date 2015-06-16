def maxn(string):
    m = [1]
    for a in range(1,len(string)):
        substr = string[:a:]
        count = string.count(substr)
        if count*len(substr) == len(string):
            m.append(count)
            if count == len(string):
                break 
    return max(m) 
while True:
    val = input("")
    if val == "*":
        break 
    print (maxn(val))

