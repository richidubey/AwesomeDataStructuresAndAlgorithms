import java.util.Scanner;

public class Random15 {
	
	
	public static int numberOfSubstrings(String s) {
		
		int count = 0;
		
		for(int i=0;i<s.length();i++) {
			
			if(s.charAt(i)=='1')
				count++;
			
		}
		
		//System.out.println(count);
		
		return count*(count+1)/2;
		
		
	}

	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the number of test cases");
		
		int t = scanner.nextInt();
		
		scanner.nextLine();
		
		while(t-->0) {
			
			String s = scanner.nextLine();
			
			System.out.println(numberOfSubstrings(s));
			
		}

		scanner.close();
		
	}
	
}
