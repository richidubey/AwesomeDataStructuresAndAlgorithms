import java.util.Arrays;
import java.util.Scanner;

public class Random23 {
	
	
	public static int findMinWeight(int[] arr, int k) {
		
		int all = 0;
		int n = arr.length;
		
		int sum = 0;
		
		for(int i=0;i<n;i++) {
            
            all+=arr[i];
        }
		
        Arrays.sort(arr);
        
        k = Math.min(k,n-k);
        
        for(int i=0;i<k;i++)
            sum+=arr[i];
        

        return all-2*sum;
		
		
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
			
			
			System.out.println(findMinWeight(arr,k));
			
			
			
		}
		
		
		
		
		scanner.close();
	}
	
}
