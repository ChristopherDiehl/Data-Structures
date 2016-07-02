#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Cracking the Coding Interview CH1.1
 *Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures.
 */

/*given two strings write a method to decide if one is a permutation of the other*/

int isUnique2(char * uniqueString);
int isUnique(char * uniqueString);
int isPermutation(char * potential_perm, char * source);

int main(int argc, char * argv [])
{
	if(argc != 2 && argc != 3)
	{
		printf("%s Usage: (string) || (string)\n",argv[0]);
		return -1;
	}

	if(isUnique(argv[1]) == 1)
	{
		printf("String is unique\n");
	} else {
		printf("Not unique\n");
	}

	if(isUnique2(argv[1]) == 1)
	{
		printf("String is unique\n");
	} else {
		printf("Not unique\n");
	}

	if(argc == 3)
	{
		if(isPermutation(argv[1], argv[2]))
		{
			printf("Is a permutation\n");
		}
	}

	return 0;
}

int isPermutation(char * potential_perm, char * source)
{
	return 0;
/*

	int pot_len = strlen(potential_perm);
	int source_len = strlen(source);
	int i = 0;
	if(pot_len )
	for(i =0; i < source_len; i)
*/
}

int isUnique(char * uniqueString)
{
	/*O(n^2) time but O(1) space */
  /* Other option is array of int with each int corresponding to a specific character*/
	
	int len = strlen(uniqueString);
	if(len > 128)
		return -1;

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
					free(collectedChars);
					return -1;
				}
			}
			collectedChars[i] = uniqueString[i];
		}
	}
	
	free(collectedChars);
	return 1;
}

int isUnique2(char * uniqueString)
{

	int len = strlen(uniqueString);
	if(len > 128)
	{
		return -1;
	}

	short * char_bucket = calloc(1,128);
	int i = 0;
	
	for(i = 0; i < len; i++)
	{

		if(char_bucket[uniqueString[i] -'0'] == 0)
		{
			char_bucket[uniqueString[i] - '0'] = 1;
		} else
		{
			free(char_bucket);
			return -1;
		}

	}

	free(char_bucket);
	return 1;
}











