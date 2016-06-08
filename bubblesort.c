#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr [], int arrLen);

int main() {

	int array [7] = {5,1,3,7,10,25,11};

	bubbleSort(array,7);
}

void bubbleSort(int arr [], int arrLen)
{
	int i,j,swap;

	for(i = 0; i < arrLen; i++)
	{

		for(j = 0; j<arrLen-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}		
	}

	for(i =0; i <arrLen; i++)
	{
		printf("%d,",arr[i]);
	}
}