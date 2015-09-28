import sys
from itertools import permutations
def permutate(data, l):
	return ((''.join(p) for p in permutations(data,n)) for n in reversed(range(0,l+1)))

def process(data):
	l = max(len(data[0]), len(data[1]))
	for g1, g2 in zip(permutate(data[0], l),permutate(data[1], l)):
		s1 = set(g1)
		s2 = set(g2)
		s = s1.intersection(s2)
		
		if len(s):
			print sorted(s)[0]
			break
		

container = list()
while True:
	try:
		if len(container)!=2:
			container.append(raw_input())
		else:
			process(container)
			container = list()
			container.append(raw_input())
	except EOFError:
		sys.exit(0)