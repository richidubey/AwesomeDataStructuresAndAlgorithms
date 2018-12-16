import java.util.Scanner;

public class Random36 {
	
	public static int findRebalanced(int[] arr) {
		
		int ans = 0;
		
		int sum = 0;
		
		for(int i=0;i<arr.length;i++)
			sum+=arr[i];
		
		int indi = sum/arr.length;
		
		for(int i=0;i<arr.length-1;i++) {
			
			int diff = arr[i] - indi;
			
			arr[i+1]+=diff;
			
			ans = Math.max(ans, Math.abs(diff));
			
		}
		
		if(ans == 0)
			ans = -1;
		
		return ans;
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter");
		
		int n = 0;
		
		while(n!=-1) {
			
			n = scanner.nextInt();
			
			int[] arr = null;
			
			if(n>0) {
				arr = new int[n];
			
				for(int i=0;i<n;i++)
					arr[i] = scanner.nextInt();
			
				//scanner.nextLine();

				System.out.println(findRebalanced(arr));
			}
			
		}
		
		
		
		scanner.close();
	}

}
