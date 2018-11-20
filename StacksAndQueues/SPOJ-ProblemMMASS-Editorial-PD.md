This is also an example of classic problem that is easy to solve when you use a Stack, in real world coding competitions, mostly this is not the case. You don't get problems that just revolve around one Data Structure. 

The logic of this whole problem lies on the fact that how many brackets do you encounter in your string. By scanning the string, you can get mass easily and that wouldn't be a problem to most people, but what makes this problem a little bit tricky, is the bracket and number part. The numbers can be after a bracket or not after a bracket. There can be many brackets or none.

So first try to focus your whole attention to what you're gonna do for the bracket problem.

The algorithm I have used in my solution is based simply on the logic that, if I get a '(' , I push `-1` on the Stack and when I encounter ')' I pop all the things from the stack adding the top most to a `int` variable until the top is `-1`. This gets me all the things between the brackets in that part. And this happens until the string exhausts.

After understanding the logic, here is the algorithm in words (with prerequisites of an `Integer` autoboxed `Stack`):

> Scan the string and if you find a digit push it on the `Stack`, after getting the top most digit in a variable and popping it of, Because this process has to be repeated for all digits in the string.

> Scan the string and implement the logic for brackets, discussed above

> Scan the string and if you find something alphabetic in the string compare it with `C`, `H` and `O` and push the required mass on the `Stack`.

> Now just pop the whole Stack off, until it gets empty, adding the top element to a variable, which after the `Stack` is empty should be your mass, of the string.

**Problem Level: Easy**
