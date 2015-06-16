from math import log
def is_power_of_2(number):
    return (number & (number-1) == 0) and (number != 0)
def in_terms_of_2(num):
    if num is 2:
        return "2"
    elif num is 1:
        return "2(0)"
    elif is_power_of_2(num):
        return "2(%s)" % in_terms_of_2(int(log(num,2)))
    else:
        power = int(log(num,2))
        if power is 1:
            return "2+%s" % in_terms_of_2(num - (2**power)) 
        return "2(%s)+%s" % (in_terms_of_2(power), in_terms_of_2(num - (2**power)) )
def main():
    string = ""
    nums = [137,1315, 73, 136, 255, 1384, 16385]
    for num in nums:
        string += "{0}={1}\n".format(num,in_terms_of_2(num))
    with open("easyprob.txt","w") as f:
        f.write(string.rstrip())
main()
