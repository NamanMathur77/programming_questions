def countPaths(maze, rows, cols): 
	if (maze[0][0] == -1): 
		return 0

	# Initializing the leftmost column 
	for i in range(rows): 
		if (maze[i][0] == 0): 
			maze[i][0] = 1

		# If we encounter a blocked cell in 
		# leftmost row, there is no way of 
		# visiting any cell directly below it. 
		else: 
			break

	# Similarly initialize the topmost row 
	for i in range(1, cols, 1): 
		if (maze[0][i] == 0): 
			maze[0][i] = 1

		# If we encounter a blocked cell in 
		# bottommost row, there is no way of 
		# visiting any cell directly below it. 
		else: 
			break

	# The only difference is that if a cell is -1, 
	# simply ignore it else recursively compute 
	# count value maze[i][j] 
	for i in range(1, rows, 1): 
		for j in range(1, cols, 1): 
			
			# If blockage is found, ignore this cell 
			if (maze[i][j] == -1): 
				continue

			# If we can reach maze[i][j] from 
			# maze[i-1][j] then increment count. 
			if (maze[i - 1][j] > 0): 
				maze[i][j] = (maze[i][j] +
							maze[i - 1][j]) 

			# If we can reach maze[i][j] from 
			# maze[i][j-1] then increment count. 
			if (maze[i][j - 1] > 0): 
				maze[i][j] = (maze[i][j] +
							maze[i][j - 1]) 

	# If the final cell is blocked, 
	# output 0, otherwise the answer 
	if (maze[rows - 1][cols - 1] > 0): 
		return maze[rows - 1][cols - 1] 
	else: 
		return 0


# Driver code  
res=[]
maze=[]
rows, cols = input().split()
rows=int(rows)
cols=int(cols)  
for i in range(rows): 
    col =input()
    row=[]
    for j in col:
        row.append(j)
    maze.append(row)
# print(maze)
for i in range(rows):
	for j in range(cols):
		if(maze[i][j]=='.'):
			maze[i][j]=0
		else:
			maze[i][j]=-1
print(maze)
arr = [x[:] for x in maze]
# print(arr)
for i in range(0, rows):
	for j in range(0, cols):
		if(maze[i][j]==-1):
			maze[i][j]=0
		else:
			maze[i][j]=-1
		n=countPaths(maze, rows, cols)
		if(n==0):
			print("0", end=' ')
		else:
			print("1", end=' ')
		maze = [x[:] for x in arr]
	print()
# # print(countPaths(arr))
# # maze = [[0, 0, 0, 0], 
# #             [0, -1, 0, 0], 
# #             [-1, 0, 0, 0], 
# #             [0, 0, 0, 0 ]] 
# # print(countPaths(maze)) 
# # print(maze)
# # for i in range(0, rows):
# # 	for j in range(0,cols):
# # 		print(arr[i][j])
# # 	print()
# # print(arr)
# # print(arr) 
# # This code is contributed by 
# # Surendra_Gangwar 

