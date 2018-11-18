import java.util.Arrays;

public class QuickSort {
	
	// uses recursion to part arrays into small parts and sort them individually gradually continuing to the the full array
	
	private int[] array;
	private int size;
	
	
	public QuickSort(int size) {
		
		this.size = size;
		array = new int[size];
	}
	
	public void generateRandomArray() {
	
		
		for(int i=0;i<size;i++)
			array[i] = (int) (Math.random()*50) + 10;
		
	}
	
	public void sort(int left, int right) {
		
		if(right<=left)
			return;
		
		else {
			
			int pivot = array[right];
			int pivotLocation = partArray(left,right,pivot);
			
			sort(left,pivotLocation-1);
			sort(pivotLocation+1,right);
		}

		
		
	}
	
	public int partArray(int left, int right, int pivot) {
		
		int leftPointer = left - 1;
		int rightPointer = right;
		
		while(true) {
			
			
			while(array[++leftPointer]<pivot)
				;
			
			while(rightPointer>0 && array[--rightPointer]>pivot)
				;
			
			if(leftPointer>=rightPointer)
				break;
			
			else {
				
				int swap;
				swap = leftPointer;
				leftPointer = rightPointer;
				rightPointer = swap;
				
			}
			
			
		}
		
		int swap = leftPointer;
		leftPointer = right;
		right = swap;
		
		return leftPointer;
		
	}
	
	public static void main(String[] args) {
		
		
		QuickSort quicksort = new QuickSort(10);
		quicksort.generateRandomArray();
		
		
		System.out.println(Arrays.toString(quicksort.array));
		
		quicksort.sort(0, quicksort.size-1);
		
		System.out.println(Arrays.toString(quicksort.array));
		
		
		
		
		
		
		
		
	}

}
