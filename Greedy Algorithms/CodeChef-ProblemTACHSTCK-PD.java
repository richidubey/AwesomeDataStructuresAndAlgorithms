import java.util.Arrays;
import java.util.Scanner;

public class Random20 {
	
	
	public static int findChopSticks(long[] arr, int d) {
		
		int valid = 0;
		int m = 0;
		
		int n = arr.length;
		
		Arrays.sort(arr);
		
		
		for(int i=1;i<n;i++) {
			
			if(arr[i]-arr[m]<d) {
				valid++;
				
			}
			
			m++;
			
		}
		
		
		return valid;
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter");
		
		
		int n = scanner.nextInt();
		int d = scanner.nextInt();
		
		long[] arr = new long[n];
		
		for(int i=0;i<n;i++) {
			
			arr[i] = scanner.nextInt();
			
		}
		
		System.out.println(findChopSticks(arr,d));
		
		
		
		scanner.close();
	}

}
