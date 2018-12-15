import java.util.Arrays;
import java.util.Scanner;

public class Random34 {
	
	public static int findAreaOfRectangle(int[] arr) {
		
		int n = arr.length;
		int ans = -1;
		
		Arrays.sort(arr);
		
		int count = 0;
		int lastIndex = -1;
		
		for(int i=0;i<n-1;i++) {
			
			if(arr[i]==arr[i+1]) {
				count++;
				lastIndex = i+1;
			}
		
		}
		
		if(count>=2) {
			
			int area = arr[lastIndex];
			
			// System.out.println("1st Side is "+area+" with lastIndex as "+lastIndex);
			
			for(int i=arr.length-1;i>=1;i--) {
				
				if(arr[i]==arr[i-1] && i!=lastIndex-1 && i!=lastIndex) {
					
					// System.out.println("2nd Side is "+arr[i]+" with i as "+i);
					
					area*=arr[i];
					break;
				}
				
			}
			
			ans = area;
			
		}

		return ans;
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
			
			System.out.println(findAreaOfRectangle(arr));
			
		}
		
		
		scanner.close();
	}

}
