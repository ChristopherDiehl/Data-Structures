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


sor = Sorting()
array = [random.randint(0,1000) for r in xrange (1000)]
sor.selectionSort(array)
#array = [random.randint(0,1000) for r in xrange (1000)]
#sor.bubbleSort(array)




