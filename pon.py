from __future__ import division
def isprime(n):
   """Returns True if n is prime"""
   if n == 2: return True
   if n == 3: return True
   if n % 2 == 0: return False
   if n % 3 == 0: return False

   i = 5
   w = 2
   while i * i <= n:
      if n % i == 0:
         return False

      i += w
      w = 6 - w

   return True

cases = int(input(""))
for a in range(cases):
   num = int(input(""))
   if isprime(num):
      print ("YES")
   else:
      print ("NO")
