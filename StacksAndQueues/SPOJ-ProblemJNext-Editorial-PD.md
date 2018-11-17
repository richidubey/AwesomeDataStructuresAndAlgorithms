This problem is often encountered in many occassions in competetive coding problems. The whole thing is based on getting the next valid permutation of the given array.

This is not just found for integer arrays but also for the strings array, which has an array of strings and you have to order all the strings in the array lexicographically.

Thinking a bit often gives you the solution for such kinds of problems, but the algorithm for them always tend to have O(n^2) or higher asymptotic growth, which we obviously don't want.

So to put the algorithm I have used in the problem in words: 
>(Basic observations)

1. If all digits (rather elements of array) are sorted in descending order, then output is always “-1”. For example, 9862.
2. If all digits (rather elements of array) are sorted in ascending order, then we need to swap last two digits. For example, 2689.
3. For other cases, we need to start the number (rather elements of array) from rightmost side, because we need to find the smallest of all numbers (rather elements of array) which are greater than the original one. 


>Actual Algorithm used in this problem
- Process the given number from rightmost digit, keep going on until you find a digit which is smaller than the previous digit.
- Now search the right side of above found digit, say ‘k’ for the smallest digit greater than ‘k’. 
- Swap the above found two digits
- Now sort all digits from position next to ‘k’ to the end of number. The number that we get after sorting is the one we were trying to find.

**Why this algorithm works in O(n.log n)**

We don't process the whole array, everytime we need to find the next permutation of the number. We just first find the first digit that we need to find, and then process only the part relatively right (greater) to it. This means we always tend to work on the smallest possible patch and exponentially decrease the work part of the array. Also we are using quickSort algorithm which tend to give us advantage over sorting those digits.


**Problem Level : Easy**
