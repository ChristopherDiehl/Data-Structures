import random


class Sorting:
	"""A Class to learn Python and some sorting"""

	def selectionSort(self, array):

		for index in range (len(array) -1,0,-1):
			minPos = 0
			for secondInd in range (1, index +1):
				if array[secondInd] < array[minPos]:
					minPos = secondInd

			tempVal = array[index]
			array[index] = array[minPos]
			array[minPos] = tempVal
	
		print array

	def bubbleSort(self, array) :
		sorted = False
		length = len(array) -1
		while not sorted:
			sorted = True
			for index in range (length):
				if array[index] > array [index+1]:
					temp = array [index]
					array[index] = array[index +1]
					array[index +1] = temp
					sorted = False
			length = length - 1
		print array
	def insertionsort(self, array):
		length = len(array)

	def quickSort(dirtyList, startPoint, endPoint):
		if startPoint < endPoint:
			splitArray = partition(dirtyList,startPoint,endPoint)
			quickSort (dirtyList,startPoint,splitArray-1)
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


sor = Sorting()
array = [random.randint(0,1000) for r in xrange (1000)]
sor.selectionSort(array)
#array = [random.randint(0,1000) for r in xrange (1000)]
#sor.bubbleSort(array)




