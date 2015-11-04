public class DoublyLinkedList { 
	private Node firstNode;
	private Node lastNode;
	private int numberOfItems = 0;
	public DoublyLinkedList () {
		
	}
	private void sortedAdd(int data) {
		Node currNode = null;
		if(firstNode == null) {
			firstNode = new Node(null, data, lastNode);
			lastNode = firstNode;
			numberOfItems ++;
		} else {
			int mean = firstNode.data + lastNode.data;
			mean = mean/2;

			if(data < mean){
				currNode = firstNode;
				while(currNode != null) {
					if(currNode.data > data ){
						if(currNode.previousNode == null){
							Node tempNode = new Node(null, data, firstNode);
							firstNode.previousNode = tempNode;
							firstNode = tempNode;
							numberOfItems++;
							break;
						} else {
							Node tempNode = new Node(currNode.previousNode, data, currNode);
							currNode.previousNode.nextNode = tempNode;
							currNode.previousNode = tempNode;
							numberOfItems++;
							break;
						}
					  }
					currNode = currNode.nextNode;	
					}
					
				} 
				//currNode = currNode.previousNode;
			 else {
				 currNode = lastNode;
				while(currNode != null) {
					if (currNode.data < data) {
						if(currNode.nextNode == null) {
							Node tempNode = new Node (lastNode, data, null);
							lastNode.nextNode = tempNode;
							lastNode = tempNode;
							numberOfItems++;
							break;
						} else {
							Node tempNode = new Node (currNode, data, currNode.nextNode);
							currNode.nextNode.previousNode = tempNode;
							currNode.nextNode = tempNode;
							numberOfItems++;
							break;
							
						}
					}
					currNode = currNode.previousNode;
				}
			}
			
		}
	}
	public void add(int data) {
		sortedAdd(data);
	}
	public int [] getArray() {
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
	public String getString() {
		if(numberOfItems != 0) {
			StringBuilder str = new StringBuilder();
			Node currNode = firstNode;
			for(int i = 0; i < numberOfItems ; i ++) {
				str.append(currNode.data);
				currNode = currNode.nextNode;
			}
			return str.toString();
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