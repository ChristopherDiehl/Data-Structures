
public class Queue <T> {
	private Node firstNode;
	private Node lastNode;
	private int size;
	public Queue() {
		firstNode = null;
		lastNode = null;
		size = 0;
	}
	public Queue (T data) {
		firstNode = new Node(null,data,lastNode);
		lastNode = firstNode;
		size = 1;
	}
	public void queue(T data) {
		if(firstNode == null) {
			firstNode = new Node(null,data,lastNode);
			lastNode = firstNode;
			size = 1;
		} else {
			
		}
	}
	
	private class Node {
		T data;
		Node nextNode;
		Node previousNode;
		private Node(Node prevNode, T aData, Node aNextNode){
			data = aData;
			nextNode = aNextNode;
			previousNode = prevNode;
		}
	}
}
