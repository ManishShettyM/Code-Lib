t = int(input())
for i in range(t):
	
	a,b,c=input().split(" ")

	a=int(a)
	a_one = bin(a).count("1")
	#print(bin(a),a_one)

	b=int(b)
	b_one = bin(b).count("1")
	#print(b_one)

	c=int(c)
	count=0
	binary=[0]*(c+1)
	#print(binary)
	for i in range(c+1):
		if(binary[i]==0):
			binary[i]=bin(i).count("1")

		if(binary[c-i]==0):
			binary[c-i]=bin(c-i).count("1")

		if(binary[i]==a_one and binary[c-i]==b_one):
			count+=1

	print(count)
	
		