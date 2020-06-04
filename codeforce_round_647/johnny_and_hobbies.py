test=int(input())
while test:
	num=int(input())
	arr = list(map(int,input().split()))
	arr = set(arr)
	res = set()
	flag=0
	for k in range(1, 1024):
		res.clear()
		for i in arr:
			num = i^k
			res.add(num)
		diff = res-arr
		if not diff:
			print(k)
			flag=1
			break
	if flag==0:
		print("-1")
	test-=1
