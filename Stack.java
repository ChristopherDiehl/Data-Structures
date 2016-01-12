public class Stack <T>{
	//T stands for type 
	private Node firstNode;
	private Node lastNode;
	private int numberOfDigits = 0;
	public Stack () {
		firstNode = null;
		lastNode = null;
	}
	public Stack(T data){
		push(data);
	}
	public boolean push(T data) {
		if (firstNode == null) {
			firstNode = new Node(null, data, lastNode);
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
		if(firstNode != null) {
			T returnVal = lastNode.data;
			lastNode = lastNode.previous;
			numberOfDigits++;
			return returnVal;
		}
		return null;
	}

	public boolean isEmpty() {
		if (numberOfDigits > 0) {
			return false;
		}
		return true;
	}
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
