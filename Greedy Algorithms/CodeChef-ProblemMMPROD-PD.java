import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

public class Random32 {
	
	
	public static long findMax(int[] arr, int k) {
		
		Arrays.sort(arr);
		
		long ans = 0;
		
		double mod = Math.pow(10, 9) + 7;
		
		long resP = 1;
		long resN = 1;
		
		for(int i=arr.length-k;i<arr.length;i++)
			resP*=arr[i];
		
		for(int i=0;i<k;i++)
			resN*=arr[i];
		
		long res = Math.max(resP, resN);
		
		long modulo = (long) (res%mod);
		if(modulo<0)
			ans = modulo+=mod;
		
		else
			ans = modulo;
		
		return ans;
			
		
	}
	
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter");
		
		int t = scanner.nextInt();
		
		while(t-->0) {
			
			int n = scanner.nextInt();
			int k = scanner.nextInt();
			
			int[] arr = new int[n];
			
			for(int i=0;i<n;i++)
				arr[i] = scanner.nextInt();
			
			System.out.println(findMax(arr,k));
		
		}
		
		
		
		scanner.close();
	}

}
