public class DoublyLinkedList <T>{ 
	private Node firstNode;
	private Node lastNode;
	private int numberOfItems = 0;
	public DoublyLinkedList () {

	}
	private void sortedAdd() {

	}
	public void add() {
		sortedAdd();
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
		T data;

		private Node(Node previousNode, T aData, Node nextNode) {
			this.nextNode = nextNode;
			this.previousNode = previousNode;
			this.data = aData;
		}
	}
}