import java.util.Arrays;
import java.util.Scanner;

public class Solution {

	public static int findSmallest(int[] a) {
		
		int small = a[0];
		
		
		for(int i=1;i<a.length;i++) {
			
			if(a[i]<=small)
				small = a[i];
			
		}

		return small;
	}
	
	public static int findLargestPossibleArea(int[] a) {
		
		int count = 0;
		
		int large = a[0];
		
		for(int i=0;i<a.length;i++) {
			
			if(a[i] > large) {
				large = a[i];
				count = 1;
			}
			
			else if(a[i] == large)
				count++;
			
		}

		return large*count;
	}

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter number of test cases");
		
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
