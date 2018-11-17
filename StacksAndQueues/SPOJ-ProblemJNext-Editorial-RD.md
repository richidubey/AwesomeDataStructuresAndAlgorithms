The first approach to solving any question should be to manually solve it on our own and then to think how we are solving it and how computer can be explained to solve the same thing.

** Basic Approach : **
Here, Take a pen and paper and see the following inputs and outputs :

- 1 5 4 8 3
 15834

- 1 4 7 4 5 8 4 1 2 6
 1474584162
 
- 1 7 9 8 7 6 2
 126789

Try to make up more examples on your own and look out for patterns 



** Implementation: **

Here if the second last digit is smaller than the last one then just replace them to get a larger number.

We will start from reverse direction as we want the next number and starting from unit's place would be the ideal thing to do.

Otherwise keep looking for the instance when our number is smaller than the current number when we are going in reverse direction and then replace that number with the number just bigger than that in the array we have already traversed( we are looking for the number just bigger becuase we want just the next bigger number than the given input) and sort the array that we have traversed.

If you can't find such a number which is smaller than previos one, then that means that our array is in descending order and we can't get a bigger number than the current one, so the answer then would be -1.


 >Rather than trying to understand this editoria, solve for some sample inputs and think about algorithm in your mind, it's pretty easy!!
 
 ** Difficulty : 2/5 **
 
 Thanks for stopping by!

