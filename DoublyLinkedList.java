public class DoublyLinkedList { 
	private Node firstNode;
	private Node lastNode;
	private int getNumberOfItems = 0;
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
		numberOfItems;
	}

 	public boolean delete (int anObject) {
		return false;
	}

	private class Node {
		Node nextNode;
		Node previousNode;
		Object data;

		private Node(Node previousNode, Object aData, Node nextNode) {
			this.nextNode = nextNode;
			this.previousNode = previousNode;
			this.data = aData;
		}
	}
}