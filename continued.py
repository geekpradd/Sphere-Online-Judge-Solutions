from decimal import *
TWO = Decimal("0.0001")
def as_frac(num, times=0):
	frac = num%1
	print ("Input is " +str(num) + " Fraction is " + str(frac))
	if int(frac*100) == 0:
		print ("Frac is approx 0 . Returning the Int part")
		return [int(num)]
	invert = Decimal(1/frac).quantize(TWO)
	print ("Invert is " + str(invert)) 
	fr = as_frac(invert)
	if len(fr):
		x = (Decimal(int(num))+Decimal(fr[0])).quantize(TWO)
	x = (Decimal(int(num))).quantize(TWO)
	print ("Integral return is " + str(x) + " Fractional is 1/" + str(fr[0]))
	return x, fr
print (as_frac(3.16))
