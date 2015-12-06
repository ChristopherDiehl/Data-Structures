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

def quickSort(dirtyList, startPoint, endPoint):
	if start < end:
		splitArray = partition(dirtyList,start,end)
		quickSort (dirtyList,start,splitArray-1)
		quickSort (dirtyList,splitArray +1,end)
	else :
		return dirtyList

def partition(dirtyList,start,end):
	pivot = list[end]
	leftPoint = start -1
	rightPoint = end
	done =0
	while not done:
		while not done:
			leftPoint = leftPoint +1

			if leftPoint == rightPoint:
				done = 1
				break

			if dirtyList [leftPoint] > pivot:
				dirtyList[rightPoint] = dirtyList[leftPoint]
				break
		while not done:
			rightPoint = rightPoint -1

			if rightPoint == leftPoint:
				done = 1
				break

			if dirtyList[rightPoint] < pivot:
				dirtyList[leftPoint]=dirtyList[rightPoint]
				break
	dirtyList[rightPoint] = pivot
	return rightPoint

a = [0,5,12,1,3,2]
b = [8,9,11,13,5,2]
stack = Stack ()
sortedB = quickSort(b)

for i in range len(b) :
	print sortedB[i]
	stack.append(sortedB[i])
