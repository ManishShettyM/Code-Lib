import itertools


t = int(input())
for i in range(t):
	n = int(input())
	l = [int(x) for x in input().split()]
	str = ''.join(str(e) for e in l)

	temp = list(itertools.combinations(l,2))

	sorted_temp = sorted(temp,key= lambda element: (element[0],element[1]),reverse=True)
	
	print(sorted_temp)