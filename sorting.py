import random
#just create an unsorted array to sort 
array = [random.randint(0,1000) for r in xrange (1000)]
val = array[0]
for index in range (1,len(array)):
	indexVal = array[index]
	if val > indexVal:
		array[index] = val
		array[index-1] = indexVal
print array



