#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr [], int arrLen);
void insertionSort(int arr[], int arrLen);

int main() {

	int array [7] = {5,1,9,7,10,25,11};

	//bubbleSort(array,7);
	insertionSort(array,7);

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

void insertionSort(int arr[], int arrLen)
{
	int i,key,j;

	for(i = 1; i < arrLen; i++)
	{

		key = arr[i];
		j = i -1;

		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		
		arr[j +1] = key;
	}
	

	for(i = 0; i < arrLen; i++)
	{
		printf("%d,",arr[i]);
	}
}