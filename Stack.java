public class Stack {
	private Node firstNode;
	private Node lastNode;
	private int numberOfDigits = 0;
	public Stack () {

	}
	public void push(int data) {
		if (firstNode == null) {
			Node firstNode = new Node(null, data, null);
			lastNode = firstNode;
			numberOfDigits ++;
		}
		else {
			Node newNode = new Node(lastNode, digit, null);
			lastNode.next = newNode;
			lastNode = newNode;
			numberOfDigits ++;
		}
		this.data = data;
	}
	public int pop() {
		if(firstNode == null) {
			return -1;
		}
		else {
			int returnVal = lastNode.data;
			lastNode = lastNode.previous;
			numberOfDigits++;
			return returnVal;
		}
	}
	public boolean isEmpty() {
		if (numberOfDigits > 0) {
			return false;
		}
	}
	//doubly linked list
	private class Node  {
		private int date;
		private Node next;
		private Node previous;

		private Node (Node previousNode, int aData, Node nextNode) {
			previous = previousNode;
			data = aData;
			next= nextNode;
		}
	}
}
