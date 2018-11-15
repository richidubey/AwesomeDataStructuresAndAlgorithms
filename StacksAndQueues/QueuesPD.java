import java.util.Arrays;

// Queues and Priority Queues implemented with classes

public class TheQueue {

	private String[] queueArray;
	private int queueSize;
	private int front,rear;
	private int numItems;
	
	
	public TheQueue(int size) {
		queueSize = size;
		
		queueArray = new String[size];
		
		Arrays.fill(queueArray, " ");
	}
	
	
	public void insert(String input) {
		
		if(numItems + 1 <= queueSize) {
			
			queueArray[rear] = input;
			
			rear++;
			
			numItems++;
			
			displayQueue();
			
			System.out.println();
			
			System.out.println(input+" was added to the queue");
		}
		
		else
			System.out.println("Queue is full");
			
		
	}
	
	public void delete() {
		
		if(numItems>0) {
			
			System.out.println(queueArray[front]+" was deleted from the queue");
			
			queueArray[front] = " ";
			
			front++;
			
			numItems--;
		}
		
		else
			System.out.println("Queue is empty");
	}
	
	public void peek() {
		
		System.out.println("Peeking the front element, which is "+queueArray[front]);
		
	}
	
	public void displayQueue() {
		
		System.out.println();
		System.out.println();
		
		for(int i=0;i<queueSize;i++)
			System.out.print(i+" | ");
		
		System.out.println();
		
		for(int i=0;i<queueArray.length;i++)
			System.out.print(queueArray[i]+" | ");
		
		System.out.println();
		
		if(!queueArray[front].equals(" ") && !queueArray[rear].equals(" ")) {
			System.out.println(queueArray[front]+" is Front");
			System.out.println(queueArray[rear]+" is Rear");
		}
		
	}
	
	public void priorityInsert(String input) {
		
		int i;
		
		if(numItems == 0)
			insert(input);
		
		else {
			
			for(i=numItems-1;i>=0;i--) {
				
				if(Integer.parseInt(input) > Integer.parseInt(queueArray[i]))
					queueArray[i+1] = queueArray[i];
				
				else
					break;
					
			}
			
			queueArray[i+1] = input;
			rear++;
			numItems++;
		}
		
	}
	
	public static void main(String[] args) {
		
		TheQueue queue = new TheQueue(10);
		
		queue.displayQueue();
		
		System.out.println();
		
		queue.priorityInsert("1");
		queue.priorityInsert("9");
		queue.priorityInsert("0");
		queue.priorityInsert("4");
		
		queue.displayQueue();
		
		queue.delete();
		
		queue.displayQueue();
	}
}
