public class Stack <T>{
	//T stands for type 
	private Node firstNode;
	private Node lastNode;
	private int numberOfDigits = 0;
	public Stack () {

	}
	public boolean push(T data) {
		if (firstNode == null) {
			Node firstNode = new Node(null, data, null);
			lastNode = firstNode;
			numberOfDigits ++;
			return true;
		}
		else {
			Node newNode = new Node(lastNode, data, null);
			lastNode.next = newNode;
			lastNode = newNode;
			numberOfDigits ++;
			return true;
		}		
	}
	public T pop() {
		if(firstNode == null) {
			return null;
		}
		else {
			T returnVal = lastNode.data;
			lastNode = lastNode.previous;
			numberOfDigits++;
			return returnVal;
		}
	}

	public boolean isEmpty() {
		if (numberOfDigits > 0) {
			return false;
		}
		return true;
	}
	//doubly linked list
	private class Node {
		private T data;
		private Node next;
		private Node previous;

		private Node (Node previousNode, T aData, Node nextNode) {
			previous = previousNode;
			data = aData;
			next= nextNode;
		}
	}
}
