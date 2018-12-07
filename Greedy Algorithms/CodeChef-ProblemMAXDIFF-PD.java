import java.util.Arrays;
import java.util.Scanner;

public class Random23 {
	
	public static int findMinPossibleWeight(int[] arr) {
		
		int n = arr.length;
		int sum1 = 0;
		int sum2 = 0;
		
		Arrays.sort(arr);
		
		if(n%2==0) {
			
			int k = n/2 - 1;
			
			for(int i=0;i<k;i++)
				sum1+=arr[i];
			
			for(int i=k;i<n;i++)
				sum2+=arr[i];
			
		}
		
		else {
			
			int k = n/2;
			
			for(int i=0;i<k;i++)
				sum1+=arr[i];
			
			for(int i=k;i<n;i++)
				sum2+=arr[i];
			
		}
		
		
		return sum2-sum1;
	}

	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("enter");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			int n = scanner.nextInt();
			int k = scanner.nextInt();
			
			int[] arr = new int[n];
			
			for(int i=0;i<n;i++)
				arr[i] = scanner.nextInt();
			
			System.out.println(findMinPossibleWeight(arr));
			
			
			
		}
		
		
		
		
		scanner.close();
	}
	
}
