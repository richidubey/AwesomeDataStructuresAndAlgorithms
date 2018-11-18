This is just a simple problem that may require you to use Stack to get a solution easily. Such problems are not very commonly seen in the real competetive coding competitions. 

The core logic of this problem is based on the fact that the lane in which you place the truck/mobile or whatever (I didn't read that properly) should never have any number greater than what's already in the top of that. This is due to the fact that our motive is to sort the whole sequence in ascending order from index 0.

So, the alogrithm I have used is based on the actual Data-Structure `Stack`, which is templated with `Integer`. `int` can not be used for templating a data structure, so `Integer` is used with [auto-boxing/unboxing](https://docs.oracle.com/javase/1.5.0/docs/guide/language/autoboxing.html).

The algorithm is very simple and purely just the logic of the problem, that is if we find that we have to put a number which is greater than the current top of `Stack` (lane) then we return "no".
Otherwise we continue with our array, and if no such thing occurs, we return "yes".

Basic operations for `Stack<Integer>` used mostly:

```
stack.pop()          // pops the top of the stack
stack.peek()         // returns current top element of the stack
stack.push(element)  // pushes the element on the stack

```

**Difficulty: Very Easy**
