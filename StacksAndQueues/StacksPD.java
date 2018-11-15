import java.util.Arrays;

// Stacks with classes

public class TheStack {

	
	private String[] stackArray;
	private int stackSize;
	private int topOfStack = -1;
	
	
	public TheStack(int size) {
		
		stackSize = size;
		
		stackArray = new String[size];
		
		Arrays.fill(stackArray," ");
		
		
	}
	
	public void push(String input) {
		
		displayStack();
		
		if(topOfStack + 1 <stackSize) {
			
			topOfStack++;
			
			System.out.println(input+" was pushed to the stack");
			
			stackArray[topOfStack] = input;
		}
		
		else
			System.out.println("Sorry the stack is full");
		
		
	}
	
	public String pop() {
		
		System.out.println();
		
		if(topOfStack>=0) {
			
			System.out.println("Top of the stack "+stackArray[topOfStack]+" was popped from the stack");
			
			stackArray[topOfStack] = " ";
			
			return stackArray[topOfStack--];
			
		}
		
		else
			System.out.println("Stack is empty");
		
		
		return "-1";
			
		
	}
	
	public String peek() {
		
		System.out.println();
		
		displayStack();
		
		System.out.println(stackArray[topOfStack]+" is on top of the stack currently");
		
		return stackArray[topOfStack];
		
	}
	
	
	public void displayStack() {
		
		System.out.println();
		System.out.println();
		
		for(int i=0;i<stackSize;i++)
			System.out.print(i+" | ");
		
		System.out.println();
		
		for(int i=0;i<stackArray.length;i++)
			System.out.print(stackArray[i]+" | ");
		
	}
	
	public void pushMultiple(String input) {
		
		String[] tempString = input.split(" ");
		
		for(int i=0;i<tempString.length;i++)
			push(tempString[i]);
		
	}
	
	public void popAllDirectly() {
		
		System.out.println();
		System.out.println("Popping everything off directly from the stack");
		
		for(int i=0;i<stackArray.length;i++) {
			stackArray[i]=" ";
		}
		
		displayStack();
	}
	
	public void popAllOneByOne() {
		
		System.out.println();
		
		for(int i=0;i<stackArray.length;i++)
			pop();
	}
	
	public static void main(String[] args) {
		
		
		TheStack stack = new TheStack(10);
		
		stack.push("2");
		
		stack.push("3");
		
		stack.peek();
		
		stack.push("5");
		
		stack.push("9");
		
		stack.peek();
		
		stack.pop();
		
		stack.displayStack();
		
		stack.pushMultiple("0 1 7 3");
		
		stack.displayStack();
		
		stack.peek();
		
		stack.pop();
		
		stack.displayStack();
		
		stack.popAllOneByOne();
		
		stack.push("4");
		stack.push("5");
		stack.push("7");
		
		stack.displayStack();
		
		stack.popAllDirectly();
		
		
	}
	
	
	
	
	
}
