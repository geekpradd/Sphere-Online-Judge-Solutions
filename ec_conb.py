cases = input()
for x in range(cases):
	n = input()
	if n%2 or n==0:
		print n 
	else:
		print int(bin(n).replace('0b', '')[::-1],2)

# Solved 28 July 2015. Easy peasy.. Knowing the python builtins 
# helps a lot. 
