import java.util.Scanner;

public class Random37 {
	
	public static int findChicken(int[] x, int[] v, int k, long b, int t) {
		
		int ans = -1;
		
		int a = 0;
        boolean[] p = new boolean[x.length];

        for (int i = 0; i < x.length; i++) {
            if ((x[i] + v[i] * t) >= b) {
                p[i] = true;
                a++;
            } 
            else {
                p[i] = false;
            }
        }

        if (a < k) {
            return -1;
        }
        
        a = 0;
        int g = x.length - 1;
        int q = 0;
        int l = 0;
        for (int i = x.length - 1; i >= 0; i--) {

            if (p[i]) {
                a++;
                if (q > 0) 
                    l += q;
                
            } 
            else 
                q++;
            

            if (k == a) {
                ans = l;
            }

        }

		return ans;
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter");
		
		int c = scanner.nextInt();
		
		int m = 1;
		
		while(c-->0) {
			
			int n = scanner.nextInt();
			int k = scanner.nextInt();
			long b = scanner.nextLong();
			int t = scanner.nextInt();
			
			int[] x = new int[n];
			
			for(int i=0;i<n;i++)
				x[i] = scanner.nextInt();
			
			int[] v = new int[n];
			
			for(int i=0;i<n;i++)
				v[i] = scanner.nextInt();
			
			System.out.print("Case #"+m+": ");
			m++;
			
			int ans = findChicken(x,v,k,b,t);
			
			if(ans==-1)
				System.out.println("IMPOSSIBLE");
			
			else
				System.out.println(ans);
			
			
		}
		
		
		
		
		scanner.close();
	}

}
