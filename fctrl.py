from math import log
def is_p(n):
    return 5**int(log(n,5))==n
cases = int(input(""))
for a in range(cases):
    number = int(input(""))
    if number in [0,1]:
        print (0)
    else:
        n = 5
        total = 0
        while n < number:
            total += number//n 
            n *= 5
        if is_p(number):
            total+=1
        print (total)