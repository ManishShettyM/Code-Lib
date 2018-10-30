from itertools import accumulate


t = int(input())
for i in range(t):
	n = int(input())
	
	l= [int(x) for x in input().split()]

	temp = list(accumulate(l))
	#print(temp)

	count=1
	days=0
	while(count<n):

		count = count + temp[count-1]
		days+=1

	print(days)

