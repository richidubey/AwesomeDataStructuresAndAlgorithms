
public class SimpleSortingAlgos {
	
	private int[] array;
	private int size;
	private long startTime;
	private long endTime;
	
	public SimpleSortingAlgos(int size) {
		
		this.size =size;
		array = new int[size];
	}
	
	public SimpleSortingAlgos(int[] array) {
		
		this.array = array;
		
	}
	
	public void bubbleSort() {
		
		startTime = System.currentTimeMillis();
		int swap;
		
		
		for(int i=0;i<size-1;i++) {
			for(int j=0;j<size-i-1;j++) {
				if(array[j]>array[j+1]) {
					swap = array[j];
					array[j]=array[j+1];
					array[j+1]=swap;
				}
			}
		}
		
		
		endTime = System.currentTimeMillis();
		
		System.out.println("Bubble sort took "+(endTime-startTime)+" millis");
		
		
	}
	
	
	public void selectionSort() {
		
		startTime = System.currentTimeMillis();
		
		for (int c = 0; c < (size - 1); c++)
		  {
		    int position = c;
		   
		    for (int d = c + 1; d < size; d++)
		    {
		      if (array[position] > array[d])
		        position = d;
		    }
		    if (position != c)
		    {
		      int swap = array[c];
		      array[c] = array[position];
		      array[position] = swap;
		    }
		  }
		
endTime = System.currentTimeMillis();
		
		System.out.println("Selection sort took "+(endTime-startTime)+" millis");
		
	}
	
	public void insertionSort() {
		
		startTime = System.currentTimeMillis();
		
		for(int i=0;i<size;i++) {
			
			int j=i;
			
			int toInsert = array[i];
			
			while(j>0 && array[j-1]>toInsert) {
				
				
				array[j]=array[j-1];
				j--;
				
				
			}
			
			array[j] = toInsert;
			
		}
		
		endTime = System.currentTimeMillis();
		
		System.out.println("Insertion sort took "+(endTime-startTime)+" millis");
		
		
	}
	
	public void showArray() {
		
		for(int i=0;i<array.length;i++)
			System.out.print(array[i]+" ");
		
		
	}
	
	public void generateArray() {
		
		for(int i=0;i<size;i++)
			array[i] = (int) (Math.random()*1000) + 10;
		
		
	}
	
	public static void main(String[] args) {
		
		
		SimpleSortingAlgos s = new SimpleSortingAlgos(13);
		
		s.generateArray();
		
		s.insertionSort();
		
		s.showArray();
	
		
		
	}

}
