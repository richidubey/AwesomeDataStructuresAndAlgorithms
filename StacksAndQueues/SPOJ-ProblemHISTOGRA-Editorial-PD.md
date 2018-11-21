This is one problem that does not only require you to think in terms of Stacks, in this whole directory. The problem is simple and clever, all you have to think is how you can maximize the area of the graph. If you think in this direction rather than concerntrating on the problem's actual statements, it would be easier to find the track.

The point in maximizing the area, which have common base, is that you have to **find the largest number that is repeated most of the times**. You have to find a number which is largest and is repeated the most number of times or a number which is repeated most number of times but not necessarily the largest. You can discard one of them based on the product of count and the magnitude.

So, this was the logic, now for the algorithm, which, if you have the logic, would be very easy to devise. Mine was this:

> Find the largest element in the array one by one, and if found increment the `count` variable to 1

> If we find that element again in the sequence just after that, increase the count.

> If we don't find the same element but find something bigger then repeat the process for that number.

> If there are no repetetion of any element, then the largest area rectangle will be the one with largest value.

This problem is solely based on what you think for maximizing the area. 

**Problem Level: Easy**
