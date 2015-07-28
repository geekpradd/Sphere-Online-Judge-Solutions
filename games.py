cases = int(input(""))
for a in range(cases):
    string = raw_input("")
    if not "." in string:
        print(1)
    else:
        decimal = string.split(".")[-1] 
        decimal = 10**len(decimal)/int(decimal)
        print(int(decimal))
