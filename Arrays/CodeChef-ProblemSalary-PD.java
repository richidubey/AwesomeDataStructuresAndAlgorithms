import java.util.Arrays;
import java.util.Scanner;

public class Random13 {
	
	
	public static int equalize(int[] arr,int count) {
		
		Arrays.sort(arr);
		
		if(arr[0]==arr[arr.length-1])
			return count;
	
		else {
			
			for(int i=0;i<arr.length-1;i++)
				arr[i]+=1;
			
			count++;
			
			return equalize(arr,count);
			
		}
		
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the number of test cases");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			int n = scanner.nextInt();
			
			int[] arr = new int[n];
			
			for(int i=0;i<n;i++) {
				
				arr[i] = scanner.nextInt();
				
			}
			
			System.out.println(equalize(arr,0));
			
		}
		
		scanner.close();
	}
	

}
