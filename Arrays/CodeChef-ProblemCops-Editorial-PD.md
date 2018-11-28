***cough! cough!*** This is also a classic example of interview problem ***cough! cough!***

So this problem is framed to confuse you just on wordings, there is nothing really complicated about it, once you understand the problem.

The first step to code a problem is to understand the problem, so the crux of the whole problem is that, the thief has to find the safes houses between 1 to 100 when police in some of the houses are going to search. You can get the number of not-safe houses by calculating how many houses the police is going to check.

You're given with the index of the police house numbers from where they start, also those numbers about how many houses they can check and how many houses they can run towards in the given time, so all you have to do is to get how many of them, they would be able to search, that is multiplication of those number. (Think, why?)

So the basic algorithm I have used in this problem, is O(n) complexity in worst case, which is okay-ish, and I think this problem can be taken upto O(log n), you can try that yourself (yay! new challenge :)

> Set a boolean array with true in every position from 0 to 100

> Calculate the variable I have named `search` that is number of houses they will search in the time

> Get the input for the police house number and see if the difference between `search` and the cop house is less than 1, if it is, then from 0 to cop house+search (max 100), all houses are not safe, so put `false` in the boolean array for these indexes

> If the value is not less than 1, then from cop house number - `search` - 1 to house number + `search` all houses are unsafe, so put false in the array at these indexes

> Count number of true occurences in the array, and that is the number of safe houses

**Problem Level: Very Easy**
