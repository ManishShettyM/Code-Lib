def func(x):
	return max(x)-min(x)

t = int(input())
for i in range(t):
	n,k = input().split()
	n=int(n)
	k=int(k)

	sets =[]
	temp = []
	for i in range(n):
		temp = [int(x) for x in input().split()]
		sets.append(temp)

	
	sets.sort(key=func,reverse=True)
	x=0

	length = 0
	i=0
	while(x<k and i<len(sets)):

		if( sets[i][1] >=sets[i+1][0] and sets[i][0]<= sets[i+1][1]):
			x+=1
			length+=(sets[i][1] - sets[i+1][0])

		i+=1


	print(length)

	