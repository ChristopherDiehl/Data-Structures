/*Christopher Diehl*/
#include "binary-tree.h"
#include <stdlib.h>
/* Creates the Binary Tree */

BinaryTreePtr BTreeCreate() {
	BinaryTreePtr btp = malloc(sizeof(BinaryTree));
	btp->numOfNodes = 0;
	btp->head = 0;
	return btp;
}

/*BTInsert inserts into the binary tree 
 *Returns 1 on success
 *Returns 0 on failure
*/

int BTInsert (BinaryTreePtr btp, int a) {
	
	if (btp->head == 0) {
		Node * newNode = malloc(sizeof(Node));
		newNode->data = a;
		newNode->leftNode = 0;
		newNode->rightNode = 0;
		return 1;
	} else {
		Node * traversalNode = btp->head;
		recursiveInsert(traversalNode);
	}
}

/* Recursive function to insert node into list */
int recursiveInsert (Node * traversalNode, int dataToInsert){
	if(traversalNode == 0){
		traversalNode = malloc(sizeof(Node));
		traversalNode->data = dataToInsert;
		traversalNode->leftNode = 0;
		traversalNode->rightNode = 0;
		return 1;
	}
	if(traversalNode->data > dataToInsert){
		return recursiveInsert(traversalNode->rightNode,dataToInsert);
	}else if(traversalNode->data < dataToInsert) {
		return recursiveInsert(traversalNode->leftNode,dataToInsert);
	}
	else {
		return 0;
	}
}

/*Destroys Binary tree recursively */

void BTreeDestroy(BinaryTreePtr btp){
	if(btp == 0) return;
	if(btp->head != 0){
		BTreeNodeDestroy(btp->head);
	}
	free(btp);
}
/*BTreeNodeDestroy is what actually destroys the nodes in the tree */
void BTreeNodeDestroy (Node * head) {
	if(head != 0){
		BTreeNodeDestroy(head->rightNode);
		BTreeNodeDestroy(head->leftNode);
		free(head);
	}
}
/*Removes an element from the binary tree
 *1 on success
 *0 on failure
 */
int BTreeRemove(BinaryTreePtr btp, int a) {
 if(btp->head == 0) return 0;
 Node * tempNode = BTreeNodeRemove(btp->head, a);
 if (tempNode == 0) {
 	return 0;
 }
 return 1;
}

/*Returns new head node for each tree */
Node * BTreeNodeRemove(Node * traversalNode, int dataToRemove) {
	if(traversalNode == 0) {
		return 0;
	}
	if (traversalNode->data > dataToRemove){
		traversalNode->leftNode= BTreeNodeRemove(traversalNode->leftNode, dataToRemove);
	} 
	else if (traversalNode->data < dataToRemove) {
		traversalNode->rightNode = BTreeNodeRemove(traversalNode->rightNode, dataToRemove);
	} else if(traversalNode->data == dataToRemove){
		//Nodes that only have on child
		if(traversalNode->leftNode ==0){
			Node * tempNode = traversalNode->rightNode;
			free(traversalNode);
			return tempNode;
		} else if(traversalNode->rightNode == 0) {
			Node * tempNode = traversalNode->leftNode;
			free(traversalNode);
			return tempNode;
		} 
		/*handles node with multiple children.. WORST CASE EVER
		 *places largest value in left subtree into traversalNode
		 *deletes largest node in left subtree because it is now in traversalNode
		 *need to delete tempNode/ largest node in left subtree using BTreeNodeRemove
		 *Cant just free it in case it has a left subtree
		 */
		else {
			Node * tempNode = BTreeGetMaxNode(traversalNode->leftNode);
			traversalNode->data = tempNode->data;
			BTreeNodeRemove(traversalNode->leftNode,traversalNode->data);
			return traversalNode;

		}
	}
}
/*Goes to the right most node in the tree and returns said node */
Node * BTreeGetMaxNode(Node * head) {
	Node * tempNode = head;
	while(tempNode->rightNode != 0){
		tempNode = tempNode->rightNode;
	}
	return tempNode;
}


/*Gets the max in the binary tree */
int BTreeGetMax(BinaryTreePtr btp) {
	Node maxNode = BTreeGetMaxNode(btp->head);
	return maxNode->value;
}



















