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
		for index in range (1, len(array) -1):
			if array[index-1] > array [index]
				temp = array [index]
				array[index] = array[index-1]
				array[index-1] = temp
		print array


array = [random.randint(0,1000) for r in xrange (1000)]
sor.selectionSort(array)
sor.bubbleSort(array)




