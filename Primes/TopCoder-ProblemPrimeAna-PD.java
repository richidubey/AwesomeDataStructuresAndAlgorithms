import java.util.Arrays;
import java.util.Scanner;

public class Random9 {
	
	public static int N = 100000;
	
	public static boolean prime[] = new boolean[N+1]; 
	
	public static void fix() {
		
		for(int i=0;i<N;i++) 
	        prime[i] = true; 
		
		for(int p = 2; p*p <=N; p++) 
        { 
             
            if(prime[p] == true) { 
               
                for(int i = p*2; i <= N; i += p) 
                    prime[i] = false; 
            } 
        } 
	}	
	
	public static boolean isPrime(int n) {
		
		
		if(n<=1)
			return false;
		
		else if(n%2==0)
			return false;
		
		else if(n==2)
			return true;
		
		else {
			
			if(prime[n] == true)
				return true;
			
		}
		
		
		return false;
		
	}
	
	public static int[] getMinProduct(int[] a) {
		
		Arrays.sort(a);
		
		int[] arr = new int[3];
		
		for(int i=0;i<3;i++)
			arr[i] = a[i];
		
		return arr;
	}
	
	public static int[] returnArray(String s) {
		
		int[] arr = {};
		
		int len = s.length();
		
		if(len == 3) {
			
			int count = 0;
			
			for(int i=0;i<len;i++) {
				
				int num = s.charAt(i) - '0';
				
				//System.out.println(num);
				
				if(isPrime(num))
					count++;
				
				
			}
			
			//System.out.println(count);
			
			if(count == len) {
				
				arr = new int[len];
				
				for(int i=0;i<3;i++)
					arr[i] = (s.charAt(i) - '0');
				
			}
			
			
		}
		
    // This solution is bit incomplete as the question was removed from the link given, I will soon complete the solution
    
	/*else {
			
			// len! combinations of numbers possible
			// (len-1)C2 ways to break this into 3 groups of digits
			
			
			for(int i=2;i<len-3;i++) {
				
				for(int j=i+1;j<len-2;j++) {
					
					
					int num1 = Integer.parseInt(s.substring(0, i-1));
					
					int num2 = Integer.parseInt(s.substring(i,j-1));
					
					int num3 = Integer.parseInt(s.substring(j,len-1));
					
					// check the first digits not being 0 and then test if numbers are prime, if prime add them to an arraylist to furthur compare the minium product
					
					System.out.println(num1);
					System.out.println(num2);
					System.out.println(num3);
					
					
					
				}
				
			}
			
			
			
			
			
			
			
			
			
		}
		
		
		
		
		
		
		
		if(len == 4) {
			
			// 4C2 combinations
			int count = 0;
			int indexChar = -1;
			
			for(int i=0;i<len;i++) {
				
				int num = s.charAt(i) - '0';
				
				if(num%2==0) {
					
					count++;
					indexChar = i;
				}
				
				
			}
			
			if(count==len || count==len-1 || count==len-2)
				return arr;
			
			else if(count == len-3) {
				
				int i;
				
				for(i=0;i!=indexChar;i++) {
				
					int num1 = 10*(s.charAt(indexChar) - '0') + (s.charAt(i) - '0');
					
				}
				
				if(i!=len) {
					
					
					for(i=indexChar+1;i<len;i++) {
						
						int num1 = 10*(s.charAt(indexChar) - '0') + (s.charAt(i) - '0');
						
					}
					
				}
				
				
			}
			
			
			
			
			
		}*/
		
		
		
		
		
		return arr;
	}
	
	
	public static void main(String[] args) {
		
		fix();
		
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the string");
		String s = scanner.nextLine();
		
		int[] arr = returnArray(s);
		
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i]+" ");
		
		
		
		
		
		scanner.close();
		
	}

}
