# Each element of the liked list
class element:
	def __init__(self,value):
		self.value = value
		self.next = None

# Original linked list
class LinkedList:
	def __init__(self,head=None):
		self.head = head

# Adding the elements to the end on the linked list
	def append(self, new_element):
		current = self.head
		if self.head:
			while current.next:
				current = current.next
			current.next = new_element
		else:
			self.head = new_element

# To delete the linked list elements
	def delete(self, element):
		current = self.head
		while current.next:
			next_element = current.next
			if next_element.value == element:
				current.next=next_element.next
			current=current.next

# adding element at a particular position in linked list
	def add_element(self, value, position):
		count=1
		current=self.head
		if position==1:
			el=element(value)
			el.next=current
			self.head=el
		else:
			while current.next:
				count=count+1
				if count==position:
					el=element(value)
					el.next=current.next
					current.next=el
				current=current.next
# To view the linked list elements
	def view_linked_list(self):
		current = self.head
		while current.next:
			print(current.value)
			current=current.next
		print(current.value)

n=int(input("Enter the number of elements"))
ll=LinkedList()
for i in range(0, n):
	num=int(input("Enter the element"))
	el=element(num)
	ll.append(el)
#num=int(input("Enter the element to delete"))
#ll.delete(num)
num=int(input("Enter the number to add"))
pos=int(input("Enter the position to add"))
ll.add_element(num,pos)
ll.view_linked_list()
