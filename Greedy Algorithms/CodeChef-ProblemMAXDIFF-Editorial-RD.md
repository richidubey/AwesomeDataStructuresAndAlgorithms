## Maximum Weight Difference : Editorial by Richi

* __Algorithm and Implementation :__

In this question, we have to tell the maximum difference between two groups, one of them having exactly k elements.
Initially I thought it is a really easy question, as I believed the answer would be just sorting the array in ascending order
and then taking out the first k elements, because it would give out the minimum elements group and we'd have the answer right?
Guess what, This is approach is only half correct and it took me hours to figure out that the maximum difference can also be created by
picking out k of the largest element first and then substracting it from the minimum ones. So, which approach to choose?
It's easy, if k is less(less than n/2) choose out the small elements as we'd the smallest group having k elements, otherwise
pick out first n-k elements, or you can say the last k elements, (Note that we have sorted the array in ascending order)
so we'd get the largest elements group of k elements. Nice na?


* __Used functions :__

- sort(pointer to start of array, pointer to end of array) : Sorts the given array in ascending order(uptil end pointer)

sort can be used by including the header file <bits/stdc++.h> . It is called STL( Standard Template Library for C++). [Read more about it!](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)


* _Difficulty_ : 3/5