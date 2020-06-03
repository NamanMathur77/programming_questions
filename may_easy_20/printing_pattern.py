a,b,c,d = input().split()
a=int(a)
b=int(b)
c=int(c)
d=int(d)
for i in range(0, a):
	for j in range(0, b):
		if i==c and j==d:
			print("0", end=" ")
		else:
			num=max(abs(c-i), abs(d-j))
			print(num, end=" ")
	print("")
