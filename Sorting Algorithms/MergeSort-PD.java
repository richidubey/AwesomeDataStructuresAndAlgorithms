
//For those of you who don't know much about java, Don't worry and head to Line number 55- 146. That is the important part and its syntax is similar to c/c++

public class MergeSort {
	
	
	// O(nlog n) Time (good)
	// but O(n) Space (bad)
	
	private int[] array;
	private int[] newArray;
	private int size;
	
	
	public MergeSort(int size) {
		
		this.size = size;
		array = new int[size];
		newArray = new int[size];
		
	}
	
	
	public void showArray() {
		
		for(int i=0;i<array.length;i++)
			System.out.print(array[i]+" ");
		
		
	}
	
	public void showNewArray() {
		
		for(int i=0;i<newArray.length;i++)
			System.out.print(newArray[i]+" ");
		
		
	}
	
	public void generateArray() {
		
		for(int i=0;i<size;i++)
			array[i] = (int) (Math.random()*1000) + 10;
		
		
	}
	
	public void mergerSort() {
		
		
		mergeSort(array);
		
	}
	
	public void mergeSort(int[] arr) {
		
		
		//startTime = System.currentTimeMillis();
		
		int s = arr.length;
		
		if(s<2)
			return;
		
		else {
			
			int mid = s/2;
			
			int[] left = new int[mid];
			int[] right = new int[s-mid];
			
			for(int i=0;i<mid;i++)
				left[i] = arr[i];
			
			for(int i=mid;i<s;i++)
				right[i-mid] = arr[i];
			
			mergeSort(left);
			
			mergeSort(right);
			
			merge(left,right,newArray);
			
			
		}
		
		
		
		//endTime = System.currentTimeMillis();
		
		
		
		
		//System.out.println("Merge sort took "+(endTime-startTime)+" millis");
		
		
	}
	
	public void merge(int[] leftA, int[] rightA, int[] arr) {
		
		int nL = leftA.length;
		int nR = rightA.length;
		
		
		int i=0,j=0,k=0;
		
		while(i<nL && j<nR) {
			
			
			if(leftA[i]<=rightA[j]) {
			
				arr[k] = leftA[i];
				i++;
			
			}
			
			else {
				
				arr[k] = rightA[j];
				j++;
			
			}
			
			k++;
			
		}
		
		while(i<nL) {
			
			arr[k] = leftA[i];
			i++;
			k++;
			
		}
		
		while(j<nR) {
			
			arr[k] = rightA[j];
			j++;
			k++;
			
		}
		
	}
	
	
	public static void main(String[] args) {
		
		
		MergeSort ms = new MergeSort(5);
		
		ms.generateArray();
		ms.showArray();
		
		System.out.println();
		
		ms.mergerSort();
		
		ms.showNewArray();
		
		
		
	}

}
