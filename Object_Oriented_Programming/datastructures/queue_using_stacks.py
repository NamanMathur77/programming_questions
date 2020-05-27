# enQueue(q,x)
# while stack1 is not empty, push everything from stack1 to stack2
# push x to stack1
# push everything back to stack1.

# deQueue(q)
# if stack1 is empty then error
# pop an item from stack1 and return it

class Queue:
	def __init__(self):
		self.s1 = []
		self.s2 = []
	def enQueue(self, x):
		if len(self.s1)!=0:
			while len(self.s1)!=0:
				n=self.s1.pop()
				self.s2.append(n)
			self.s1.append(x)
			while len(self.s2)!=0:
				n=self.s2.pop()
				self.s1.append(n)
		else:
			self.s1.append(x)
	def deQueue(self):
		if len(self.s1)==0:
			print("Queue is empty")
		else:
			x=self.s1.pop()
			return x
	def seeTop(self):
		return self.s1[-1]
query=99
q=Queue()
while query!=0:
	print("Enter the function you want to perform on the queue")
	print("1: Insert element, 2: Dequeue element, 3: see the first element 0: QUIT")
	query=int(input())
	if query==1:
		val=int(input())
		q.enQueue(val)
	elif query==2:
		res=q.deQueue()
		print(res)
	elif query==3:
		val=q.seeTop()
		print(val)
