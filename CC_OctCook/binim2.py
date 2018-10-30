t = int(input())
for i in range(t):
	n,s= input().split()
    n = int(n)
    if s == "Dee":
    	s1 = "Dum"
    else
    	s2 = "Dee"

    count_1=0
    count_0=0

    for i in range(n):
    	arr = list(input())
        if arr[0] =='1' and arr[-1] == '1':
            count_1+=1
        elif arr[0] == '0' and arr[-1] == '0':
            
            count_0+=1
        elif arr[0] == '1' and arr[-1] == '0':
            count_0+=1
            count_1+=1
        elif arr[0] == '0' and arr[-1] == '1':
            count_0+=1
            count_1+=1
        stack.append(arr)
    if count_1>count_0:
        print('Dee')
    elif count_0>count_1:
        print('Dum')
    else:
        print(s)