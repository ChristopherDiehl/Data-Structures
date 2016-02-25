#ifndef STACK_h
#define STACK_h
/*simple stack
 *stores data. Doesn't care what it stores
 *doubly linked list, but only worries about appending to back, ie last node
 *LIFO DATA STRUCTURE
 *Only needs to access last node backwards
*/

 /*
  *Node used for stack navigation
  *
 */
 typedef struct Node_
 {
 	void * data;
 	struct Node_ * prev;
 	struct Node_ * next;
 } Node;

 /*Wrapper struct for nodes
  *'Stack'
  */

 typedef struct Stack_h
 {
 	int size;
 	Node * tail;
 }Stack;

 /*Creates the stack, initializes everything to 0 */

 Stack * SCreate();
 /*destroys the stack and all the values in the stack */
 void StackDestroy(Stack * stack);
 /*Pops the last data inserted
  *frees node data was stored in
  */

 void * pop (Stack * stack);

  /*Peeks the last data inserted
  *doesn't alter node data was stored in
  */

 void * peek (Stack * stack);

 /*pushes new data into stack
  *appends to end of the list
  */
  void push (Stack * stack, void * data);

 /*checks if stack is empty
  *returns 0 if empty
  *returns 1 if not empty
 */

  int isEmpty(Stack * stack);
 #endif