while True:
    try:
        num = int(input(""))
        if num==1:
            print(1)
        else:
            print (2*(num-1))
    except EOFError:
        break

#Python is awesome for such small problems.. Simple Problem, Simple ALgorithm and Simple Code