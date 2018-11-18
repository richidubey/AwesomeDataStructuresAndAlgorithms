Merge Sort basically keeps dividing the given array into smaller left and right subparts and then while joining compares each element one by one of corresponding parts.

We'll go through the important parts of the code from the top:

	>public void mergeSort(int[] arr) {
		
		
		
		
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

First it finds the length of the array and if length is 1(that is the array can't be subdivided further), it goes on to return, i.e. closing the function(Disallowing to divide further).

If it can be divided, it finds it's mid point and divides it into two parts and allocates the respective value of elements that they denote.

Now on to the most important merge function

	>public void merge(int[] leftA, int[] rightA, int[] arr) {
		
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

Intially three integers **i,j,k** are declared which represents the current traversing index for left, right and merged array respetively.<br />

>While (i<nl and j<nr)
asks the while loop to run only till either one of the array is completely traversed.<br />

>(leftA[i]<=rightA[j]) 
compares current index of left  array with current index of right array and whichever is smaller is added to main array, increasing the index of the array from which the element is added.<br />

At the end:
>while(i<nL) or while(j<nR)
checks if either one of the left or right array is not completely added to merged array(All the elements remaining are bigger than every other element of other array) and then goes on to adding all the elements of it into the main array

**Fun facts**
Only one of the two while loops will run as the if elements are left to be filled, that means other array has already filled all its elements.<br />
While Filling  the entire array in the end, we dont care about sorting it because it has already been sorted earlier by the merge sort by which it was made(mindfuck!).


To help yourself watch this fun visualization: https://www.youtube.com/watch?v=JSceec-wEyw


Thanks for stopping by!
Have Fun!!

 
