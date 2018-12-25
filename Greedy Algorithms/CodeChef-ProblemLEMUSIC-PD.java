import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;

public class Random40 {
	
	
	public static long getMaxSweetness(int[] s, int l) {
		
		
		Arrays.sort(s);
		
		int i;
		
        long answer = 0;
        for (i=0; i<s.length; ) {
        	
            long length = s[i];
            i++;
            
            answer += i*length;
            l-= length;
            
        }
        answer += l*s.length;
		
		
		return answer;
		
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);

		System.out.println("Enter");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			int n = scanner.nextInt();
			
			int len = 0;
			
			HashMap<Integer,Integer> hm = new HashMap<Integer,Integer>();
			
			for(int i=0;i<n;i++) {
				
				int B = scanner.nextInt();
				int L = scanner.nextInt();
				
				len+=L;
				
				Integer length = hm.get(B);
				
                if (length == null || length > L) {
                    hm.put(B, L);
                }
				
			}
			
			int[] songs = new int[hm.size()];
            int i = 0;
            
            for (int length : hm.values()) {
                songs[i++] = length;
            }
            
            System.out.println(getMaxSweetness(songs,len));
			
		}
		
		
		scanner.close();
	}
}
