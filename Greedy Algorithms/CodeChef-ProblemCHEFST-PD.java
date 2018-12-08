import java.util.Scanner;

public class Random24 {

	public static long find(int n1, int n2, int m) {
		
		long ans = 0;
		
		long temp=((long)m*(m+1))/2;
		
		if(temp<=Math.min(n1,n2)) 
			ans=(n1-temp)+(n2-temp);
		
		else 
			ans=Math.max(n1,n2)-Math.min(n1,n2);
		
		return ans;
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			int n1 = scanner.nextInt();
			int n2 = scanner.nextInt();
			int m = scanner.nextInt();
			
			System.out.println(find(n1,n2,m));
			
		}
		
		
		
		
		scanner.close();
	}
	
}
