t = int(input())
for i in range(t):
	n = int(input())

	l = [int(x) for x in input().split(" ")]

	if(l.count(-1) == n):
		print("inf")

	elif(sorted(l) == l):
		print("inf")

	else:

		j=0
		for i in range(2,len(l)-1):

			if(a[i]==1):

				if(a[i+1]==-1):
					a[i+1]=2

				if(a[i-1]!=-1):
					res=a[i-1]

			elif(a[i] > a[i-1]+1):
				print("impossible")




	