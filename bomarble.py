def marbles(n):
	out = 5
	incr = 7
	while n!=1:
		out+=incr
		incr+=3
		n-=1
	return out
c = input()
while c!=-1:
	print marbles(c)
	c = input()
