t = int(input())
for i in range(t):

	n,m=input().split(" ")
	n=int(n)
	m=int(m)
	

	temp= str()
	for i in range(n):
		temp += input()
		
	l = [int(x) for x in str(temp)]

	indices = [i for i, x in enumerate(l) if x == 1]

	d=[0 for i in range(1,n+m)]

	for i in range(len(indices)):
		for j in range(i+1,len(indices)):
			
			x=indices[i]
			y=indices[j]

			if(abs(x-y)<m):
				d[abs(x-y)]+=1
			else:
				t = (x%m + y%m)
				if(t>4):
					t=t%4
				d[t]+=1

	for i in range(1,n+m-1):
		print(d[i], end=' ')
