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
		int * temp = pop(stack);
		printf("Data : %d",*temp);
		free(temp);
	}
	StackDelete(stack);
	return 0;
}