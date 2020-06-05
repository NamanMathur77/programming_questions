def ifPossible(a):
	while a%2==0:
		a/=2
	return a
test=int(input())
while test:
	a,b = input().split()
	a=int(a)
	b=int(b)
	if a>b:
		n=b
		b=a
		a=n
	num=ifPossible(b)
	ans=0
	if num!=ifPossible(a):
		print("-1")
	else:
		b/=a
		while b>=8:
			b/=8
			ans+=1
		if b>1:
			ans+=1
		print(ans)
	test-=1
