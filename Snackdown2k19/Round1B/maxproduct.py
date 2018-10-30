t = int(input())
for i in range(t):
    n,k = input().split()
    n=int(n)
    k=int(k)

    temp = [i for i in range(k,0,-1)]
    #print("initial:",temp)

    if(n < int(k*(k+1)/2)):
    	print("-1")

    elif(n==int(k*(k+1)/2)):
    	print("0")

    else:

    	l = int( (n- int(k*(k+1)/2))/k )

    	r = (n- int(k*(k+1)/2)) % k;
    	
    	ans=1
    	t = 0
    	while(t<k):
    		x = temp[t]+l
    		if(r>0):
    			x+=1
    			r-=1
    		t+=1
    		ans= (ans*(( (x**2)%1000000007 - x%1000000007 )))%1000000007

    	print(ans)





    