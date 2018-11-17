This question uses **Pigeon Hole principle**

Since N goes up to 10^5, we can't have an O(n^2) algorithm.


We'll make a sum array which will store the sum uptil i-th index and we'll modulo it by n each time we calculate it.

Amazing Fact: 

	>For an array having n elements which are mod-ed by n, we'll either have all distinct element from 0 to n-1, in which case 0 element is the one divisible by n or we'll have repeating elements,
	and the repeating elements can be written as a*n+k,b*n+k which have k as repetition and when substracted, they give (a-b)*n which is divisible by n.
	
	So we'll always have such a sub-array. Therefore -1 can never come.


So, to get a continuous array of sum divisible by n, there are three cases :

1. The element itself is divisible by n.

	>So for that , a[i]%n is 0 and we print 1 and the index of the element(+1 : As indicated in the question ).
	
2. Sum uptill index i-th is 0 

	>So print i+1 and index of all elements from 0(+1) to i(+1)
	
3. Sum modded by n of two numbers is same

	>So print j-i, and the index of elements from  j(+1) to i(+1). 




