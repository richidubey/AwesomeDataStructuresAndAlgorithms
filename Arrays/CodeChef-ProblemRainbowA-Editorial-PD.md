This is also very much like an interview questions, and really I also think, again writing this line would be like saying something that's understood.

This question states in crux that a Rainbow Array is an array which has elements symmetrical about the mid index of the array and value at the next index should follow this rule: `nextValue - previousValue <= 1`. So now when you've understood the problem you might have come up with an algorithm that checks the values from last and from beginning of the array but with a complexity of O(n^2).

So to avoid that, I have used a simple algorithm in which I store the first index in a variable and use just one loop to go through elements while changing the index of the value stored in that variable.

My algorithm in pseudocode like structure:

```
> m := 0

> count := 0

> first := arr[m]

> loop from arr.length - 1 to (arr.length-1)/2 and compare the value of first with arr[i]

> increment value of first like this, first := arr[++m]

> if the next value we have i.e first and the previous value i.e arr[i] has difference less than equal to 1, then increment count

> else break, as we found something that can never be a rainbow array

> at last compare count to (arr.length)/2, as if it was incremented this many times, the array was a rainbow array and if not then array was not a rainbow array

```

**Bonus tip:** Such questions require a bit of quick thinking and a lot of practice to be done quickly especially in an interview.

**Problem Level: Very Easy**
