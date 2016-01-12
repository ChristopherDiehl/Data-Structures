
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
			Node tempNode = new Node(lastNode, data, null);
			lastNode.nextNode = tempNode;
			lastNode = tempNode;
			size++;
		}
	}
	public T unqueue(){
		if(size == 0) 
			return null;
		else {
			T data = lastNode.data;
			lastNode = lastNode.previousNode;
			return data;
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
