cases = input("")
for a in range(cases):
    n = raw_input("")
    n1, n2 = int(n.split(" ")[0]), int(n.split(" ")[1])
    print (str(n1**n2)[-1])