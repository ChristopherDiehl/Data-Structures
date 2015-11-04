import java.util.ArrayList;
import java.util.Collections;
import java.util.List;


public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		DoublyLinkedList dll = new DoublyLinkedList ();
		List <Integer> list = new ArrayList<Integer>();
		for (int i = 0; i < 30000; i++)
		    list.add(i + 1);

		Collections.shuffle(list);
		for(int i = 0; i < list.size(); i++){
			int intToAdd = list.get(i);
			dll.add(intToAdd);
		}
		int [] dllA = dll.getArray();
		for(int i = 0; i < dllA.length; i++) System.out.println(dllA[i]);		
	}

}
