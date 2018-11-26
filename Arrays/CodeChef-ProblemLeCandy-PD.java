import java.util.Scanner;

public class Random11 {
	
	
	public static String happyElephants(int[] a,int c) {
		
		String ans = "YES";
		
		int sum = 0;
		
		for(int i=0;i<a.length;i++)
			sum+=a[i];
		
		if(sum<c)
			ans = "NO";
		
		
		return ans;
	}
	
	
	
	public static void main(String[] args) {
		
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the test cases");
		
		int t = scanner.nextInt();
		
		int c = 0,n;
		
		int[] ele = {};
		
		
		
		
		while(t-->0) {
			
			n = scanner.nextInt();
			
			c = scanner.nextInt();
			
			ele = new int[n];
			
			for(int i=0;i<n;i++)
				ele[i] = scanner.nextInt();
			
			System.out.println(happyElephants(ele,c));
			
		}
		
		
		
		
		scanner.close();
		
	}

}


