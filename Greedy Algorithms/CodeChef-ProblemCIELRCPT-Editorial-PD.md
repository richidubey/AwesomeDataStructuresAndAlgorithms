This is a standard interview based problem, and is not very hard to think about. The thing about Greedy Algorithms is, that they sound something new and difficult, but they aren't. When I first heard of them, I too was under the impression that they may be something altogether new and difficult, but they are as simple as any other coding problem.

This problem revolves around, how to get sum of a number with numbers which are powers of two, that too minimally. 

The algorithm I used in words, here is based on recursion and has complexity O(log n):

> Declare a variable `num` and multiply it with 2, until it is less than the number `input`

> If `num` (actually `num/2`, depending on how you use loops) is equal to `input`, then return 1.

> Otherwise return `1 + sameMethod(input - num)`, this would recursively find the largest possible power of 2 less than your input and get your answer.

Bonus Tip: Understanding the question on your terms is the key to excel the art of coding such problems.

**Problem Level: Very Easy**
