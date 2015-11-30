import random


class Sorting:
	"""A Class to learn Python and some sorting"""

	def selectionSort(self, array):
		val = array[0]
		for index in range (1,len(array)):
			indexVal = array[index]
			smallestIntVal = index
			for secondInd in range (index+1, len(array)):
				if array[secondInd] < array[index]:
					smallestIntVal = secondInd
					index = secondInd

			array[index] = array[smallestIntVal]
			array[smallestIntVal] = indexVal
	
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


sor = Sorting()
array = [random.randint(0,1000) for r in xrange (1000)]
sor.selectionSort(array)
array = [random.randint(0,1000) for r in xrange (1000)]
sor.bubbleSort(array)




