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
		if(isPermutation(argv[1], argv[2]) == 1)
		{
			printf("Is a permutation\n");
		} else
		{
			printf("not a permutation \n");
		}
	}

	return 0;
}

//kind of same thought process as second is unique
//worst case goes through each string twice, however needs extra 128*4 (depends on architecture) bits of memory for int bucket
int isPermutation(char * a, char * b)
{


	int a_len = strlen(a);
	int b_len = strlen(b);
	int i = 0;
	if(b_len != a_len)
		return -1;

	int char_bucket [128]= {};
	for(i =0; i < b_len; i++)
	{
		char_bucket[b[i]-'0']++;
	}

	for(i = 0; i < a_len; i++)
	{
		if(char_bucket[a[i]-'0'] > 0)
		{
			char_bucket[a[i]-'0']--;
		} else
		{
			return -1;
		}
	}

	return 1;

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











