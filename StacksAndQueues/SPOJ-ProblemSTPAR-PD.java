import java.util.Scanner;
import java.util.Stack;

public class Dog {

	public static String getSTPAR(int[] a) {
		
		String ans = "yes";
		
		Stack<Integer> st = new Stack<Integer>();
		
		for(int i=0;i<a.length-1;i++) {
			
			if(a[i]<a[i+1])
				st.push(a[i]);
			
			if(!st.empty()) {
			//	System.out.println("Peeking "+st.peek());
				
				if(st.peek() >= a[i+1]) {
					ans = "no";
					break;
				}
			}
	
			
		}
		
		return ans;
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the size");
		
		int n = scanner.nextInt();
		
		
		int[] arr = new int[n];
		
		
		for(int i=0;i<n;i++)
			arr[i]=scanner.nextInt();
		
		
		System.out.println(getSTPAR(arr));
		
		
		
		scanner.close();
		
		
	}
	
}
