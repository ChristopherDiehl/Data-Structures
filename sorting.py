import random
#just create an unsorted array to sort 
array = [random.randint(0,1000) for r in xrange (1000)]
val = array[0]
for index in range (1,len(array)):
	indexVal = array[index]
	smallestIntVal = index
	for secondInd in range (index+1, len(array))
		if array[secondInd] < array[index]:
			smallestIntVal = secondInd
			index = secondInd

	array[index] = array[smallestIntVal]
	array[smallestIntVal] = indexVal
print array


