
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Random28 {
	
	public static int findMax(ArrayList<Integer> a) {
		
		int index = 0;
		
		for(int i=0;i<a.size();i++) {
			if(a.get(i)>a.get(index))
				index = i;
		}
		
		return index;
	}
	
	
	public static int findMaxTip(int[] a, int[] b, int x, int y) {
		
		if(x!=y) {
			
			
				
				ArrayList<Integer> arr = new ArrayList<Integer>();
				
				for(int i=0;i<a.length;i++)
					arr.add(a[i]-b[i]);
				
				Collections.sort(arr);
				
				//System.out.println("Difference array first "+arr.get(arr.size()-1));
				
				int sum = 0;
				
				for(int i=0;i<a.length;i++) {
				
					if(a[i]-b[i]>=arr.get(arr.size()-1) && x>0) {
						sum+=a[i];
						//System.out.print(a[i]+"+");
						--x;
					}
				
					else {
						sum+=b[i];
						//System.out.print(b[i]+" ");
					}	
				}
				
				//System.out.println();
				
				return sum;
			
			
			
			
			
		}
		
		else {
		
			int sum = 0;
		
			for(int i=0;i<a.length;i++) {
			
				if(a[i]>b[i] && x>0) {
					sum+=a[i];
					--x;
				}
			
				else {
					sum+=b[i];
				}	
			
			}
		
			return sum;
		}
	}
	

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter");
		
		int n = scanner.nextInt();
		int x = scanner.nextInt();
		int y = scanner.nextInt();
		
		int[] a = new int[n];
		int[] b = new int[n];
		
		for(int i=0;i<n;i++)
			a[i] = scanner.nextInt();

		for(int i=0;i<n;i++)
			b[i] = scanner.nextInt();
		
		System.out.println(findMaxTip(a,b,x,y));
		
		
		scanner.close();
	}
	
	
}
