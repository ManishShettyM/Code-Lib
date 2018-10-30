t = int(input())

#hj - hi <=k
for i in range(t):
	n,k = input().split(" ")
	k = int(k)
	n = int(n)
	
	a = [int(x) for x in input().split(" ")]

	diff = []
	diff.append(a[0]- 0)
	for i in range(1,len(a)):
		diff.append(a[i]-a[i-1])

	count=0;
	for i in diff:
		if i<=k:
			continue

		elif i%k==0:
			count+= (i//k)-1

		else:
			count+= i // k

	print(count)


