98s = input()
p = input()



location=[]

flag=0
for i in s:
	if(i not in p):
		print("-1")
		flag=1
		break

	location.append(p.index(i))
	
location.append(0)

print(location)
#full word present in some concatenations
if(flag==0):
	count=0
	for i in range(len(location)-1):

		if(location[i]>=location[i+1]):
			count+=1

	if(count==0):
		print("1")
	else:
		print(count)