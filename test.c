#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	int i = 0;
	Stack * stack = SCreate();
	while (i < 5){
		int * temp = malloc(sizeof(int));
		* temp = i;
		push(stack,(void *)temp);
		printf("Data : %d\n",*(int * )peek(stack));
		i++;
	}
	while (isEmpty(stack )!= 0){
		printf("Data : %d",*(int * )pop(stack));
	}
	return 0;
}