import math

t = int(input())
for i in range(t):

	n,k = input().split()
	n = int(n)
	k = int(k)

	if(n==1):
		print("1.000000")
		continue

	if(n==2):
		print("0.500000")
		continue

	if(n==3 and k==1):
		print("0.500000")
		continue


	
	if(k==0):
		ans = 0
	
	else:

		end_k = math.ceil(n/2) # >=end_k ->1.0
		#print(end_k)

		if(k >= end_k):
			ans = 1

		elif(k == end_k-1):
			ans = 1/2

		else:
			ans = 1/(n - (2*k))

	print(str.format('{0:.6f}', ans))
