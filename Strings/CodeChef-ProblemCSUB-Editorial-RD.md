## Count Substrings : Editorial by Richi

* __Algorithm and Implementation__

This is a pretty simple question, but an interesting thing to note here is that, this has to be solved in less that O(n2) time complexity(Since the value of n goes 
up to 10^5 and its square would be 10^10 which would give us a time-out error). I didn't notice that before and wrote a working solution(which obviously is TLE). If you want
to check it out, head up to : [Richi's Failed Solution](https://www.codechef.com/status/CSUB,ilovemetoo).

Anyways, As always, try solving for some cases on your own and see how things work out. 

For example, I tried with _10101_ which should give output as 6, and I saw it as : 

> Count from left to right, If you encounter a 1, add 1 to count(our answer) along with number of ones encountered so far(since they would form a substring with this current 1 as
their ending point). 
So you maintain two variables, count and number of ones till now.


_Difficulty_ : 1/5.
