import java.util.Scanner;
import java.util.Stack;

public class Random41 {
	
	public static int findLargestPossibleArea(int[] a) {
	 
	        Stack<Integer> s = new Stack<Integer>(); 
	        int n = a.length;
	          
	        int max = 0; 
	        int top;   
	        int m = -1; 
	        int i = 0; 
	        while (i < n) { 
	           
	            if (s.empty() || a[s.peek()] <= a[i]) 
	                s.push(i++); 
	       
	            
	            else { 
	                top = s.peek(); 
	                s.pop();  
	       
	               
	                m = a[top] * (s.empty() ? i : i - s.peek() - 1); 
	       
	                
	                if (max < m) 
	                    max = m; 
	            } 
	        } 
	       
	        
	        while (s.empty() == false) { 
	            top = s.peek(); 
	            s.pop(); 
	            
	            if(s.empty())
	            	m = a[top]*i;
	            
	            else
	            	m = a[top]*(i-s.peek()-1); 
	       
	            if (max < m) 
	                max = m; 
	        } 
	       
	        return max; 
	  
	}

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter");
		
		int t = scanner.nextInt();

		while(t-->0) {
    
			int n = scanner.nextInt();
			
			int[] arr = new int[n];
			
			for(int i=0;i<n;i++)
				arr[i] = scanner.nextInt();
			
			
			System.out.println(findLargestPossibleArea(arr));
			
			
		}
    
		scanner.close();
		
	}
  
	
}
