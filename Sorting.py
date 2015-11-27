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
	
array = [random.randint(0,1000) for r in xrange (1000)]
sor.selectionSort(array);




