#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node_ Node;
struct Node_
{
	struct Node_ * prev;
	struct Node_ * next;
	char c;
};

typedef struct HashTable_ HashTable;
struct HashTable_
{
	Node * headNode;
	int size;
};

int computeHash(char * data);
int createHashTable(int size);
int addToTable ()