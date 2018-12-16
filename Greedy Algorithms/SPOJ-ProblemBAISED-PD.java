
import java.util.HashMap;
import java.util.Scanner;


public class Random35 {
	
	
	public static int findMinBadness(int[] num, String[] name) {
		
		int bad = 0;
		
		int n = num.length;
		
		HashMap<Integer, String> rank = new HashMap<Integer, String>();
		
		for(int i=0;i<n;i++) {
			
			if(rank.get(num[i])==null)
				rank.put(num[i],name[i]);
			
			else {
				
				while(rank.containsKey(num[i])) {
					num[i]++;
					bad++;
				}
				
				rank.put(num[i], name[i]);
				
			}
		}
		
		
		return bad;
		
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			long n = scanner.nextLong();
			
			scanner.nextLine();
			
			String[] name = new String[(int) n];
			int[] num = new int[(int) n];
			
			for(int i=0;i<n;i++) {
				
				name[i] = scanner.nextLine();
				num[i] = scanner.nextInt();
				
				scanner.nextLine();
				
			}
			
			System.out.println(findMinBadness(num,name));
			
		}
		
		// Complexity can be lessened? O(t*n*n*bad)
		
		
		scanner.close();
	}

}
