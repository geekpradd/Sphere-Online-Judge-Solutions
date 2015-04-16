def work(n):
	a = []
	for num in range(1,n+1):
		a += [int(ax) for ax in list(str(num))]
	for i, x in enumerate(a):
		if  i and  i%2:
			a[i]  = -1*a[i] 
	return sum(a)
			
while True:
	number = input("")
	if not number:
		break
	else:
		print work(number)


