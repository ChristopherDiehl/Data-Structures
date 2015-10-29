public class DoublyLinkedList { 
	private Node firstNode;
	private Node lastNode;
	private int numberOfItems = 0;
	public DoublyLinkedList () {
		
	}
	private void sortedAdd(int data) {
		if(firstNode == null) {
			firstNode = new Node(null,data,lastNode);
		}
	}
	public void add(int data) {
		sortedAdd(data);
	}

	public void get(){

	}
	public void getNumberOfItems () {
		numberOfItems ++;
	}

 	public boolean delete (int anObject) {
		return false;
	}

	private class Node {
		Node nextNode;
		Node previousNode;
		int data;

		private Node(Node previousNode, int aData, Node nextNode) {
			this.nextNode = nextNode;
			this.previousNode = previousNode;
			this.data = aData;
		}
	}
}