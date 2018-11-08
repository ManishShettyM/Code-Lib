n,q = input().split()
n = int(n)
q = int(q)

binary = []
max_len=0
for i in range(n):
    binary.append(input())
    if(len(binary[i]) > max_len):
    	max_len=len(binary[i])




	#a = "0"*(max_len - len(binary[i]))
	#binary[i] = a + binary[i]

for i in range(q):

    l,r,x = input().split()
    l=int(l)-1
    r=int(r)-1

    temp = binary[l:r+1]
    if(len(x) > max_len):
    	max_len = len(x)

    final = str()
   	for i in temp:
   		a = "0"*(max_len - len(i))
   		







