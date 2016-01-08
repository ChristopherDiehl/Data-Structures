import java.util.ArrayList;
import java.util.Collections;
import java.util.List;


public class Test {

	/*public static void main(String[] args) {
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
	}*/
	
	public static void main(String[] args)
	{
	 System.out.println("");
	 System.out.println("");
	 System.out.println("Hey!");
	 pause();
	 System.out.println("Hey YOU!");
	 System.out.println("");
	 pause();
	 System.out.println("Yea you.");
	 pause();
	 System.out.println("");
	 System.out.println("Guess What?!");
	 pause();
	 for(int i=0; i< 5; i++){
	  System.out.println("...");
	  pause();
	  }
	 System.out.println("I LOVE YOU!");
	 
	 }
  public static void pause(){
   try {
    Thread.sleep(1000);                 //1000 milliseconds is one second.
} catch(InterruptedException ex) {
    Thread.currentThread().interrupt();
}
  }

}
