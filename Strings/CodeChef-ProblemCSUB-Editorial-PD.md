This is also one of those problems that you don't see much in a real world coding competitions, but many such problems are often faced in interviews or are the base of a bigger problem in a coding competition. So, this problem is just based on mathematics.

You don't need big or new data structures to solve this problem, you just need simple logic, reasoning and a bit of combinatorics. And that's it, you're done.

So the logic is based on, if a string has `n` 1s in it, then the number of such substrings which end and start with 1 are n*(n+1)/2.

The reason behind this is simply math, just understand that, you have to choose a substring of this form 1 _ _ _ _ ... 1. So if you have `n` 1s, then selecting for end and starting, you can have (n+1)C2 ways. That's simple combinatorics, nothing else.

[This link might help you grasp some basics about Combinatorics](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=3&cad=rja&uact=8&ved=2ahUKEwi56OTkrvbeAhUM2xoKHWhTBucQFjACegQIARAB&url=https%3A%2F%2Fbetterexplained.com%2Farticles%2Feasy-permutations-and-combinations%2F&usg=AOvVaw17IQO2fjRc1_VdirZTVCoi).

**Problem Level: Very Easy**
