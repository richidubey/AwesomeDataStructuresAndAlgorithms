import java.util.Scanner;

public class Random22 {
	
	
	public static int findMinSum(int p) {
		
		int num = 1;
		int count = 1;
		
		while(num<=p) {
			
			num = num*2;
			
		}
		
		if(p-num/2==0)
			return count;
		
		else
			return count + findMinSum(p-num/2);
		
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			int p= scanner.nextInt();
			
			System.out.println(findMinSum(p));
			
		}
		
		
		scanner.close();
		
	}

}
