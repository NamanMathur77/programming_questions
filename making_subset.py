def print_subset(subset):
	for i in subset:
		if i==None:
			continue
		else:
			print(i, end=" ")
	print()
def all_subset(arr):
	subset=[None]*len(arr)
	helper(arr, subset, 0)
def helper(arr, subset, i):
	if i==len(arr):
		print_subset(subset)
	else:
		subset[i]=None
		helper(arr, subset, i+1)
		subset[i]=arr[i]
		helper(arr, subset, i+1)

n=int(input())
arr = list(map(int, input().split()))

all_subset(arr)
