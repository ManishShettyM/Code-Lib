t = int(input())
for i in range(t):
	n = int(input())
	a= [int(x) for x in input().split()]
	b= [int(x) for x in input().split()]

	flag=0
	for i in range(len(a)-2):

		dif = b[i] - a[i]
		a[i]+=dif
		a[i+1]+=(2*dif)
		a[i+2]+=(3*dif)

		if(a[i]>b[i]):
			flag=1
			break

		elif(a[i+1] > b[i+1]):
			flag = 1
			break

		elif(a[i+2] > b[i+2]):
			flag = 1
			break


	

	if(flag==0 and a==b):
		print("TAK")

	else:
		print("NIE")
