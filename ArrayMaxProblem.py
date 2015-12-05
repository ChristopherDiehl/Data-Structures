'''Given two arrays maxinimize the number by replacting it with elements of second array, numbers from second array can only be used one

a = [0,5,12,1,3,2]
b = [8,9,11,13,5]
example when finished a looks like [13,11,12,9,8]
'''

class Stack:

	list = [];

	def __init__(self):

	def peek(self):
		try:
			returnval = list.pop()
			list.append(returnval)
			return returnval
		except:
			print Unexpected error

	def pop(self):
		return list.pop()
	def append(self, valueToAppend):
		list.append(valueToAppend)



