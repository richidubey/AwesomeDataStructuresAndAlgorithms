Sorting is required by almost all of the questions that you may encounter in a competetive coding competetion. Sorting is also very useful in real life softwares, so this does make it a little bit more important.
There are tons of ways of how you can sort an array of integers (as an example), there are lots of algorithms, but here we are discussing the most famous ones, and the most efficient ones. And almost always, efficiency never go hand in hand with being easy.

So the common sorting algorithms, you'll find in this directory are:
- Bubble Sort
- Insertion Sort
- Selection Sort
- Shell Sort
- Merge Sort
- Quick Sort


**Bubble Sort**
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
>Worst and Average Case Time Complexity: O(n^2). Worst case occurs when array is reverse sorted.

>Best Case Time Complexity: O(n). Best case occurs when array is already sorted.

>Auxiliary Space: O(1)

>Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.

>Sorting In Place: Yes

>Stable: Yes

Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm.

**Insertion Sort**
Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.
>Time Complexity: O(n^2)

>Auxiliary Space: O(1)

>Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.

>Algorithmic Paradigm: Incremental Approach

>Sorting In Place: Yes

>Stable: Yes

**Selection Sort**
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
>Time Complexity: O(n2) as there are two nested loops.

>Auxiliary Space: O(1)

The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation.

**Shell Sort**
ShellSort is mainly a variation of Insertion Sort. In insertion sort, we move elements only one position ahead. When an element has to be moved far ahead, many movements are involved. The idea of shellSort is to allow exchange of far items. In shellSort, we make the array h-sorted for a large value of h. We keep reducing the value of h until it becomes 1. An array is said to be h-sorted if all sublists of every h’th element is sorted.
>Time Complexity: Time complexity of above implementation of shellsort is O(n2). In the above implementation gap is reduce by half in every iteration.


**Merge Sort**
Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves.
>Time Complexity: Θ(nlog n)

>Auxiliary Space: O(n)

>Algorithmic Paradigm: Divide and Conquer

>Sorting In Place: No in a typical implementation

>Stable: Yes


**Quick Sort**
Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.
>Worst Case Time Complexity: Θ(n^2)

>Best Case Time Complexity: Θ(nlog n)

>Average Case Time Complexity: O(nlog n)





