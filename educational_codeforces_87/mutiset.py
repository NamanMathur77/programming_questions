class element:
	def __init__(self, value):
		self.value=value
		self.next=None

class LinkedList:
	def __init__(self, head=None):
		self.head=head
	def append(self, value):
		el = element(value)
		current=self.head
		if self.head==None:
			self.head = el
		else:
			while current.next:
				current=current.next
			current.next=el
	def delete(self, pos):
		current=self.head
		count=1
		if pos==1:
			self.head=current.next
		else:
			while current.next:
				if count+1==pos:
					current.next=current.next.next
					break
				count+=1
				current=current.next


	def display(self):
		current=self.head
		while current.next:
			print(current.value)
			current=current.next
		print(current.value)
	def insert(self, val):
		current=self.head
		if current.value > val:
			el=element(val)
			el.next=current
			self.head=el
		else:
			while current.next and current.next.value<val:
				current=current.next
			el=element(val)
			el.next=current.next
			current.next=el
	def displayHead(self):
		if self.head:
			print(self.head.value)
		else:
			print("0")



a,b = input().split()
arr=list(map(int, input().split()))
arr.sort()
ll=LinkedList()
for i in arr:
	ll.append(i)
queries=list(map(int, input().split()))
for query in queries:
	if query<0:
		num=-1*(query)
		ll.delete(num)
	else:
		ll.insert(query)
ll.displayHead()
