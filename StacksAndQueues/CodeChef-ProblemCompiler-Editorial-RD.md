##Compiler Editorial - by Richi

There's also another question which asks if a given formula is closed or not, which can be solved using a similar approach.

As always first try out some sample inputs and outputs and think about the algorithm

**Sample Input and Outputs**
- >< <br />
  0<br /><br />
 
- <<<><br />
  0<br /><br />
  
- <><><<br />
  4 <br /><br />
  
- <<>>><<<<>>>><br />
  4 <br /><br />
  
  Also try out the inputs in the question description.
 
**Logic and Implementation**

>Make sure you understand that we have to find out the <> pairs only in the prefix. If you still don't get it, please look at the sample imputs again.

Whenever we encounter a '>' we'll pop an element out of our stack(stack originally has all the '<' whichver are encountered till now). If there's nothing in the stack(i.e. stack.size() is 0), then we print the sum of the prefix till now.<br /><br />
We store the size of the current prefix sum in maxcurr integer. It gets updated only when current is more than maxcurr(prefix sum) and at the same time size of vector is 0,which denotes that the conditions for it to be correct notation of L++(given language in question) is satisfied.

Like in example: <<<>, at the end, curr is 2 but still output would be 0 as our maxcurr won't be updated due to size of stack not being zero(stack would have the first two '<').


Well, this editorial ends here. If you still have any doubts, please do not hesistate to contact any one of the contributors, We'll eagerly reach back to you as soon as possible.

Thanks a lot!

