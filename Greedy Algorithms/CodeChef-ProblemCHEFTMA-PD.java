import java.util.Arrays;
import java.util.Scanner;

public class Random33 {
	
	public static int findSolution(int[] a, int[] b, int[] c, int[] d) {
		
		int ans = 0;
		
		int[] diff = new int[a.length];
		
		for(int i=0;i<a.length;i++) {
			
			diff[i] = a[i] - b[i];
			
		}
		
		/*System.out.println();
		
		System.out.println("unsorted diff array");
		
		for(int i=0;i<a.length;i++)
			System.out.print(diff[i]+" ");*/
		
		
		int[] all = new int[c.length+d.length];
		
		for(int i=0;i<c.length;i++)
			all[i] = c[i];
		
		for(int i=0;i<d.length;i++)
			all[c.length+i]=d[i];
		
		/*System.out.println();
		
		System.out.println("unsorted all array");
		
		for(int i=0;i<all.length;i++)
			System.out.print(all[i]+" ");*/
		
		Arrays.sort(all);
		
		/*System.out.println();
		
		System.out.println("all array");
		
		for(int i=0;i<all.length;i++)
			System.out.print(all[i]+" ");*/
		
		for(int i=0;i<diff.length ;i++) {
			
			if(diff[i]-all[i]>=0)
				diff[i]-=all[i];
		}
		
		for(int i=0;i<diff.length;i++)
			ans+=diff[i];
		
		//System.out.println();
		
		return ans;
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			int n = scanner.nextInt();
			int k = scanner.nextInt();
			int m = scanner.nextInt();
			
			int[] a = new int[n];
			int[] b = new int[n];
			
			for(int i=0;i<n;i++)
				a[i] = scanner.nextInt();
			
			for(int i=0;i<n;i++)
				b[i] = scanner.nextInt();
			
			int[] c = new int[k];
			int[] d = new int[m];
			
			for(int i=0;i<k;i++)
				c[i] = scanner.nextInt();
			
			for(int i=0;i<m;i++)
				d[i] = scanner.nextInt();
			
			System.out.println(findSolution(a,b,c,d));
			
			
		}
		
		
		scanner.close();
	}

}
