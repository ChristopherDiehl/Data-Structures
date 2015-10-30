public class DoublyLinkedList { 
	private Node firstNode;
	private Node lastNode;
	private int numberOfItems = 0;
	public DoublyLinkedList () {
		
	}
	private void sortedAdd(int data) {
		if(firstNode == null) {
			firstNode = new Node(null, data, lastNode);
		} else {
			int mean = firstNode.data + lastNode.data;
			mean = mean/2;
			Node currNode = null;
			if(data < mean){
				currNode = firstNode;
				while(data != currNode.data) {
					currNode = currNode.nextNode;	
				} 
				currNode = currNode.previousNode;
			}
			if (data > mean) {
				currNode = lastNode;
				while (data != currNode.data) {
					currNode = currNode.previousNode;
				}
				currNode= currNode.nextNode;
			}
			Node tempNode = new Node(currNode.previousNode , data, currNode);
			Node pastNode = currNode.previousNode;
			pastNode.nextNode = tempNode;
			currNode.previousNode = tempNode;	
			numberOfItems++;
		}
	}
	public void add(int data) {
		sortedAdd(data);
	}
	public int [] getList() {
		if(numberOfItems != 0) {
			int [] data = new int [numberOfItems];
			Node currNode = firstNode;
			for(int i = 0; i < numberOfItems -1; i ++) {
				data[i] = currNode.data;
				currNode = currNode.nextNode;
			}
			return data;
		}
		return null;
	}
	public boolean delete (int data){
		int mean = firstNode.data + lastNode.data;
		mean = mean/2;
		boolean valueFound = false;
		if( data > mean) {
			Node currNode =  lastNode;
			while (currNode.data >=  data) {
				if(currNode.data == data) {
					Node prevNode = currNode.previousNode;
					prevNode.nextNode = currNode.nextNode;
					Node nextNode = currNode.nextNode;
					nextNode.previousNode = prevNode;
					valueFound = true;
				}
				currNode = currNode.previousNode;
			}
		} else {
			Node currNode =  firstNode;
			while (currNode.data >=  data) {
				if(currNode.data == data) {
					Node prevNode = currNode.previousNode;
					prevNode.nextNode = currNode.nextNode;
					Node nextNode = currNode.nextNode;
					nextNode.previousNode = prevNode;
					valueFound = true;
				}
				currNode = currNode.nextNode;
			}
		}
		return valueFound;
	}
	public void getNumberOfItems () {
		numberOfItems ++;
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