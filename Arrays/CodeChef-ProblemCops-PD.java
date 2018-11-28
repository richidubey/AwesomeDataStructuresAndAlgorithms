import java.util.Arrays;
import java.util.Scanner;

public class Random16 {
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the number of test cases");
		
		int t = scanner.nextInt();
		
		int count = 0;
		
		
		while(t-->0) {
			
			int m = scanner.nextInt();
			int x = scanner.nextInt();
			int y = scanner.nextInt(); // time, wtf!
			
			int search = x*y;
			
			boolean[] safes = new boolean[100];
			
			Arrays.fill(safes, true);
			
			
			while(m-->0) {
				int h = scanner.nextInt();
				
				if(h-search-1 < 0){
					
					Arrays.fill(safes,0, Math.min(h+search,100), false);
					
				}
				
				else{
					
					Arrays.fill(safes,h-search-1, Math.min(h+search,100), false);
					
				}
				
				//System.out.println("h= "+h+" h-search= "+(h-search));
			}
			
			
			
			for(int i=0;i<100;i++)
				if(safes[i])
					count++;
			
			System.out.println(count);
			
			
			
		}
		
		
		scanner.close();
		
	}

}
