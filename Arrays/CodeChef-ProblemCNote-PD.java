import java.util.Scanner;

public class Random12 {
	
	
	public static String isLucky(int[] p, int[] c, int need, int money) {
		
		String ans = "UnluckyChef";
		
		for(int i=0;i<p.length;i++) {
			
			if(p[i]>=need && c[i]<=money) {
				ans = "LuckyChef";
				break;
			}
			
		}
		
		return ans;
	}
	
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the test cases");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			
			int x = scanner.nextInt();
			int y = scanner.nextInt();
			int k = scanner.nextInt();
			int n = scanner.nextInt();
			
			int[] pages = new int[n];
			int[] cost = new int[n];
			
			for(int i=0;i<n;i++) {
				
				pages[i] = scanner.nextInt();
				
				cost[i] = scanner.nextInt();
				
			}
			
			System.out.println(isLucky(pages,cost,x-y,k));			
			
		}
		
		
		scanner.close();
	}

}
