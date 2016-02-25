#ifndef BINARY_TREE_h
#define BINARY_TREE_h
/*
 *binary-tree.h
*/

/*Notes
 *Going to start with making binary tree only store ints
 *Then transition to storing void * with user passing in compare and destroy functions for void * data
 *Once void * is working, data will be destroyed when removed from tree or when tree is destroyed
 *Typical binary tree implementation, data > node in right subtree
 *data < node in left subtree
*/

/*
 *Node to be used for Binary tree
*/

 typedef struct Node_
 {
 	int data;
 	struct Node_ * leftNode;
 	struct Node_ * rightNode;
 } Node;

 /*Functions passed it so Binary tree knows how to destroy and compare Node Values */

 typedef int (*CompareFunct)(void *, void*);
 typedef void (*DestroyFunct)(void *); 


 /*Wrapper struct Binary Tree */

 typedef struct BinaryTree_
 {
 	Node * head;
 	int numOfNodes;
 	CompareFunct compare;
 	DestroyFunct destroy;
 } BinaryTree;
 typedef BinaryTree * BinaryTreePtr;

 /* Create function for Binary Tree
  * Returns a pointer to a BinaryTree struct
 */

  BinaryTreePtr BTreeCreate();
 /*Destroys Binary Tree 
  * ALL THE DATA IS DESTROYED AS WELL
 */
  void BTreeDestroy(BinaryTreePtr btp);

 /*Returns 1 on successful insert, if data already in tree, return 0 */
  int BTInsert(BinaryTreePtr btp, int a);
 /*Recursive insert acutally places the node into the list.*/
  int recurisveInsert(Node * traversalNode, int dataToInsert);

 /*Returns 1 on successful remove, 0 if unsuccesful */
  int BTreeRemove(BinaryTreePtr btp, int a);
/*recursive method to delete a node from a tree */
  Node * BTreeNodeRemove(Node * traversalNode, int dataToRemove);
 /*recurisveInsert is what actually adds new nodes to the list
  *this is a separate function because it is recursive and focuses solely on nodes
  *the BT struct is not present in this at all, rather the head node is 
  *used to traverse the binary tree
 */
  void BTreeNodeDestroy (Node * head);
  /*returns the max value in the btp tree) */
  int BTreeGetMax (BinaryTreePtr btp);
  /*returns node that holds the max value) */
  Node * BTreeGetMaxNode (Node * he
#endif