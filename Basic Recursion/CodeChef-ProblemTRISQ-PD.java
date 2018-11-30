import java.util.Scanner;

public class Random17 {
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the number of test cases");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			int n = scanner.nextInt();
			
			int a = (n/2) - 1;
			int count = 0;
			
			for(int i=0;i<=a;i++)
				count+=i;
			
			System.out.println(count);
			
			
		}
		
		
		
		scanner.close();
	}
	
}
