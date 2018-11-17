import java.util.Arrays;
import java.util.Scanner;

public class RandomCodeClass {
	
	 // My code always remains comment-less, but I will be adding an editorial for the algorithm
	
	static long et;
	static long st;

	public static long findNextNumber(int[] a) {
		
		long num = 0;
		int len = a.length;
		int i;
		
		et = System.currentTimeMillis();
		
		for(i=len-1;i>0;i--) {
			
			if(a[i]>a[i-1])
				break;
		}
    
		if(i==0)
			return -1;
		
		else {
    
			int m=i;
			int t = a[i];
			
			for(int j=i+1;j<len;j++) {
				
				
				if(a[j]>m && a[j]<a[m])
					m=j;
				
			}
			
			int temp = a[i-1];
			a[i-1] = a[m];
			a[m] = temp;
			
			
			Arrays.sort(a, i, len);
			
			for(int l=0;l<len;l++) {
				// System.out.println(a[l]);
				
				num+=(Math.pow(10,len-l)*a[l]);
				
			}
			
			st = System.currentTimeMillis();
			
			return num/10;
			
		}
	}

	public static void main(String[] args) {
	
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter test cases");
		
		int t = scanner.nextInt();
		
		while(2*t-->0) {

			int n = scanner.nextInt();
			
			int a[] = new int[n];
			
			for(int i=0;i<n;i++) 
				a[i]=scanner.nextInt();

			System.out.println(findNextNumber(a)+" in "+(st-et)+" millis ");	
			
		}
		
		scanner.close();
		
	}
  
}
