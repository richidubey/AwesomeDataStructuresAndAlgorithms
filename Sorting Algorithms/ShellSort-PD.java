import java.util.Arrays;

public class ShellSort {
	
	// ShellSort is nothing but improved Insertion Sort, it is based on the fact that before actually sorting the elements using 
	// insertion sort, we must first arrange the arrays to be in semi-sorted manner, so that insertion sort takes lesser time to sort the
	// the whole sequence
	
	private int[] array;
	private int size;
	
	
	public ShellSort(int size) {
		
		this.size = size;
		array = new int[size];
		
		generateRandomArray();
	}
	
	public void generateRandomArray() {
	
		
		for(int i=0;i<size;i++)
			array[i] = (int) (Math.random()*50) + 10;
		
	}
	
	public void sort() {
		
		
		for(int gap = size/2;gap>0;gap/=2) {
			
			
			for(int i=gap;i<size;i++) {
				
				
				int temp = array[i];
				
				int j;
				for (j = i; j >= gap && array[j - gap] > temp; j -= gap) 
	                array[j] = array[j - gap]; 
	              
	            //  put temp (the original a[i]) in its correct location 
	            array[j] = temp; 
				
				
			}
			
		}
		
	}
	
	
	
	
	public static void main(String[] args) {
		
		ShellSort shellsort = new ShellSort(1000);
		
		
		
		
		System.out.println(Arrays.toString(shellsort.array));
		
		long sTime = System.currentTimeMillis();
		
		shellsort.sort();
		
		long eTime = System.currentTimeMillis();
		
		System.out.println(Arrays.toString(shellsort.array));
		
		System.out.println("Shell sorting took "+(eTime-sTime)+" millis");
		
		
		
	}

}
