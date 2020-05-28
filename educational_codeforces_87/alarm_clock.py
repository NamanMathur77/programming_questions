import math
def findTime(a,b,c,d):
	sleep = b
	if sleep<a:
		remaining_time=a-sleep
		if c>d:
			sleep_time=math.ceil(remaining_time/(c-d))
			time = (sleep_time*c)+sleep
			return time
		else:
			return -1
	else:
		return b
test = int(input())
while test:
	list = input().split()
	a=int(list[0])
	b=int(list[1])
	c=int(list[2])
	d=int(list[3])
	ans=findTime(a,b,c,d)
	print(ans)
	test-=1
