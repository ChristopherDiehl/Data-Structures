#include "stack.h"
#include <stdlib.h>
/*Initializes stack */
Stack * SCreate()
 {
 	Stack * stack = malloc(sizeof(Stack));
 	stack->size = 0;
 	stack->tail = 0;
 	return stack;
 }
void StackDestroy(Stack * stack)
 {
  while(stack->tail != 0){
    Node * tempNode = stack->tail->prev;
    free(stack->tail);
    stack->tail = tempNode;
  }
  free(stack);
 }
 /*Returns last node data
  *if fails, returns 0
  */
 void * pop (Stack * stack){
 	if (stack->size == 0){
 		return 0;
 	}
 	Node * tempNode = stack->tail;
 	void * tempData = tempNode->data;
 	stack->tail= tempNode->prev;
 	stack->size --;
 	free(tempNode);
 	return tempData;
 }
 /* 
  *Peeks at last node's data
 */
 void * peek (Stack * stack) {
 	if(stack->size == 0){
 		return 0;
 	}
 	return(stack->tail->data);
 }

 /*
  *Inserts new node into stack
  *Inserts into end
  *
 */
  void push (Stack * stack, void * data) {
  	Node * tempNode = malloc(sizeof(Node));
    tempNode->data = data;
  	if(stack->size ==0){
  		stack->tail = tempNode;
  	}else {
  		tempNode->prev = stack->tail;
  		stack->tail = tempNode;
  	}
  	stack->size++;
  }

  /*isEmpty()*/
  isEmpty(Stack * stack) {
  	if(stack->size ==0){
  		return 0;
  	}else {
  		return 1;
  	}
  }