#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Cracking the Coding Interview CH1.1
 *Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures.
 */




int main(int argc, char * argv [])
{
	if(argc != 2)
	{
		printf("%s Usage: (string)\n",argv[0]);
		return -1;
	}

	char * uniqueString = argv[1];
	int len = strlen(uniqueString);
	int i = 0;
	int k = 0;
	char * collectedChars = calloc(1,len);

	for(i = 0; i < len; i ++)
	{
		if(i == 0)
		{
			collectedChars[0] = uniqueString[i];
		}
		else 
		{
			for(k = 0; k < strlen(collectedChars); k ++)
			{
				if(collectedChars[k] == uniqueString[i])
				{
					printf("Not unique\n");
					return -1;
				}
			}
			collectedChars[i] = uniqueString[i];
		}
	}

	printf("Unique\n");
	return 0;
}

