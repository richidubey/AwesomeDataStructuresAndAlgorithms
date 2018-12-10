
import java.util.Scanner;

public class Random25 {
	
	
	public static String getString(int k, String s) {
		
		String ans = "NO";
		
		int n = s.length();
		
		char[] w = new char[n];
		
        for (char c = '0'; c < '0' + k; ++c) {
        	
             w = s.toCharArray();
            if (w[0] != '?' && w[0] != c) {
            	
                continue;
            }

            boolean good = true;
            w[0] = c;
            for (int i = 1; i < n; ++i) {
            	
                boolean ok = false;
                for (char d = '0'; d < '0' + k; ++d) {
                	
                    if (w[i] != '?' && w[i] != d) {
                    	
                        continue;
                    }
                    
                    if (d != w[i - 1] && d != w[((i + 1) % n)]) {
                    	
                        w[i]= d;
                        ok = true;
                        break;
                    }
                }
                
                if (!ok) {
                    good = false;
                    break;
                }
            }
            
            if (good) {
                ans="";
                for(int i = 0;i<n;i++)
                ans += w[i];
                break;
            }
        }
       
		
		
		return ans;
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("enter");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			
			int k = scanner.nextInt();
			
			scanner.nextLine();
			
			String s = scanner.nextLine();
			
			System.out.println(getString(k,s));
			
			
			
		}
		
		
		
		
		scanner.close();
		
	}

}
