# import re
# def tobinary(num, base=2):
#     if num<base:
#             return str(num)
#     return tobinary(num//base, base) + str(num%base) 
# def into_powers_of_two(num):
#     binary = tobinary(num)
#     return (2**m.start() for m in re.finditer("1", binary[::-1]))
# cases = input("")
# for k in range(cases):
#     data = raw_input("").split()
#     a,b = int(data[0]), int(data[1])
#     res = 1
#     for power in into_powers_of_two(b):
#         res *= (a**power)%10 
#     print (res%10)

# #Uses the Modular Exponention algorithm.. See this: https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/fast-modular-exponentiation
a = input('')
for b in range(a):
    n = raw_input("").split()
    print int(n[0])**int(n[1])%10
