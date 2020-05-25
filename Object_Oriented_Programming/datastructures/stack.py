stack = [1,2,3,4]
num = int(input("Enter the element to append"))
# use append for pushing the elements
stack.append(num)
case=int(input("Enter 1 to pop the stack"))
if case==1:
#pop to pop the element
	stack.pop()
print(stack[:])

