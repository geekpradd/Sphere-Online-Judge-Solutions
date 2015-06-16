cases = int(input(""))
while cases:
    try:
        x = raw_input("").split()
        vals = (x[0], x[2], x[4])
        if "machula" in x[4]:
            x[4] = str(int(x[0]) + int(x[2]))
        elif "machula" in x[2]:
            x[2] = str(int(x[4]) - int(x[0]))
        elif "machula" in x[0]:
            x[0] = str(int(x[4]) - int(x[2]))

        print ' '.join(x)
        cases-=1
    except:
        pass