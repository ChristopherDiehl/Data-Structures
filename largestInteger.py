
def getProductOfIntegers(a,numNotToCount) :
	if len(a) < 1:
		return -1;
	product = 1;
	for i in range(len(a)):
		if i !=  numNotToCount :
			product *= a[i];

	return product;

print("HELLO WORLD");
a = [3,1,2,5,8,3]
product = getProductOfIntegers(a,1);
print(product);


