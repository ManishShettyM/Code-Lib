t=int(input())
for i in range(t):
	n = int(input())

	l = [int(x) for x in input().split(" ")]

	partitions=0
	for i in range(len(l)-1):
		if(l[i] > l[i+1]):
			#print(l[i])
			partitions+=1

	#print(partitions)	
	if(partitions==0):
		print("YES")

	elif(partitions==1):
		if(l[0]>=l[len(l)-1]):
			print("YES")
		else:
			print("NO")
	
	else:
		print("NO")