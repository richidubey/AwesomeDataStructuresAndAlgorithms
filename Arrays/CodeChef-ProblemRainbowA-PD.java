import java.util.Scanner;

public class Random14 {
	
	public static String isRainbow(int[] arr) {
		
		String ans = "NO";
		
		int len = arr.length;
		
		int m = 0;
		int count = 0;
		
		int first = arr[m];
		
		for(int i=len-1;i>(len-1)/2;i--) {
			
			if(first == arr[i]) {
				
				//System.out.println(first);
				first = arr[++m];
				
				if(first-arr[i]<=1)
					count++;
					
			}
			
			else
				break;
			
		}
		
		//System.out.println("count is "+count);
		
		if(count == len/2)
			ans = "Yes";
		
		return ans;
		
	}
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		
		System.out.println("Enter the number of test cases");
		
		int t = scanner.nextInt();
		
		
		while(t-->0) {
			
			
			int n = scanner.nextInt();
			
			int[] arr = new int[n];
			
			for(int i=0;i<n;i++)
				arr[i] = scanner.nextInt();
			
			
			System.out.println(isRainbow(arr));
			
			
		}
		
		
		
		scanner.close();
		
	}

}
