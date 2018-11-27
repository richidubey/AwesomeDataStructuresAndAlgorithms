This is again a very interview centric problem and actually most of the array problems are. 

So this problem states in crux that the employer has to equalize the salaries of his employees using a simple algorithm, that is:

> Choose one worker
> Raise salaries of all workers except him by 1<br>
> Continue this untill everyone's salaries become equal<br>
> Also achieve this in minimum number of moves<br>

This algorithm has to be used in the method/function you're going to make for getting the output. 

For this, I have used recursion, now I know people don't like recursion as a good option because they have "heard" that it is not efficient. Well, not entirely correct, but also not entirely wrong. Recursion is bad for space complexity but equal in terms of time complexity.

My recursion based algorithm for this problem is as follows:

> Sort the arrays using quick sort O(n*log n)

> Compare the first and last items in array, and if they are equal, the whole array is equal, so return the `count`

> If the terms are not equal, raise all items excpet the largest one at last by 1, and increment the `count`

> Give recursive call to the same method with the new array and `count`

**Problem Level: Very Easy**
