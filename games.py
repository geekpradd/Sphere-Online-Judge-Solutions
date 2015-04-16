place_value = lambda x: int("1" + "0"*len(x))
cases = int(input(""))
for a in range(cases):
    string = input("")
    if not "." in string:
        print(1)
    else:
        decimal = string.split(".")[-1] 
        decimal = int(decimal)/place_value(decimal)
        games = int(1/decimal)
        print(games)