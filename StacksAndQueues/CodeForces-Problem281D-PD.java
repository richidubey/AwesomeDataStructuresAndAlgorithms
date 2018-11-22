import java.util.Arrays;
import java.util.Scanner;

public class MaximumXOR {

	public static int getMaxLuckyNumber(int[] arr) {
		
		Arrays.parallelSort(arr);
		
		int maxXOR = Integer.MIN_VALUE;
		int term = 0;
		
		for (int i = 0; i < arr.length - 1; i++) { 
			
            term = arr[i] ^ arr[i + 1]; 
            maxXOR = Math.max(maxXOR, term); 
            
        } 
		
		return maxXOR;
		
	}
	

	public static void main(String[] args) {
		
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the size");
		int n = scanner.nextInt();
		
		int[] arr = new int[n];
		
		for(int i=0;i<n;i++)
			arr[i] = scanner.nextInt();
		
		System.out.println(getMaxLuckyNumber(arr));
		
		scanner.close();
		
	}
	
	

}
