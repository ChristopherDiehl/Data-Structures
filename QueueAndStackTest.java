
public class QueueAndStackTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Queue<Integer> q = new Queue<Integer> (5);
		q.queue(8);
		System.out.println(q.unqueue());
		System.out.println(q.unqueue());
		System.out.println(q.unqueue());
		Stack<String> s = new Stack<String> ("Last");
		s.push("IN");
		s.push("FIRST");
		s.push("OUT");
		System.out.println(s.pop());
		System.out.println(s.pop());
		System.out.println(s.pop());
		System.out.println(s.pop());
		
	}

}
