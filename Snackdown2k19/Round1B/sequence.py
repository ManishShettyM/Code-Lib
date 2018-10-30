t = int(input())
for i in range(t):
	n,k = input().split()
	n=int(n)
	k=int(k)

	a = [int(x) for x in input().split()]
	b = [x**x for x in a]


	a.sort()
	b.sort()

	flag=0
	for i in range(k):
		
		if(sum(b) <= sum(a)):
			print("YES")
			flag=1
			break

		else:
			a[len(a)-i-1]=1
			b[len(a)-i-1]=1
			

	
	if(flag==0 and sum(b) <= sum(a)):
		print("YES")
		flag=1	

	if(flag==0):
		print("NO")


