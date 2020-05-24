# Each element of the liked list
class element:
	def __init__(self,value):
		self.value = value
		self.next = None

# Original linked list
class LinkedList:
	def __init__(self,head=None):
		self.head = head
	def append(self, new_element):
		current = self.head
		if self.head:
			while current.next:
				current = current.next
			current.next = new_element
		else:
			self.head = new_element
	def delete(self, element):
		current = self.head
		while current.next:
			next_element = current.next
			if next_element.value == element:
				current.next=next_element.next
			current=current.next

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
num=int(input("Enter the element to delete"))
ll.delete(num)
ll.view_linked_list()
