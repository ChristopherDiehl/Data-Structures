"""A python program to print words for individual digits without if statement"""
numList = ['zero','one','two','three','four','five','six','seven','eight','nine']
def printTheWords(n):
	try:
		print numList[n%10]
		if n >=10 :
			printTheWords(n/10)
	except TypeError:
		print "Invalid Input"
printTheWords(50)
printTheWords