t = int(input())
for i in range(t):

	n,m = input().split(" ")
	n = int(n)
	m = int(m)


	grid=[]
	for i in range(n):
		grid.append(list(input()))

	temp=[[0 for x in range(m)] for y in range(n)]

	for i in range(n):
		for j in range(m):
			if(grid[i][j]=='.'):
				temp[i][j]=0
			else:
				temp[i][j]=-1

	
	for i in range(n-1):
		for j in range(m-1):

			if(grid[i][j]=='#' or grid[i+1][j]=='#' or grid[i][j+1]=='#' or grid[i+1][j+1]=='#'):
				continue;
			else:
				temp[i][j]+=1
				temp[i+1][j]+=1
				temp[i][j+1]+=1
				temp[i+1][j+1]+=1

	flag=0
	for i in range(n):
		for j in range(m):
			if(temp[i][j]==0):
				print("NO")
				flag=1
				break
		if(flag==1):
			break

	if(flag==0):
		print("YES")


			


	