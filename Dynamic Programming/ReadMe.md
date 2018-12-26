# Dynamic Programming

What is a dynamic programming, how can it be described? A DP is an algorithmic technique which is usually based on a recurrent formula and one (or some) starting states. A sub-solution of the problem is constructed from previously found ones. DP solutions have a polynomial complexity which assures a much faster running time than other techniques like backtracking, brute-force etc.

Now let’s see the base of DP with the help of an example:

Given a list of N coins, their values (V1, V2, … , VN), and the total sum S. Find the minimum number of coins the sum of which is S (we can use as many coins of one type as we want), or report that it’s not possible to select coins in such a way that they sum up to S.

Now let’s start constructing a DP solution:

First of all we need to find a state for which an optimal solution is found and with the help of which we can find the optimal solution for the next state.

What does a "state" stand for?

It’s a way to describe a situation, a sub-solution for the problem. For example a state would be the solution for sum i, where i≤S. A smaller state than state i would be the solution for any sum j, where j<i. For finding a state i, we need to first find all smaller states j (j<i) . Having found the minimum number of coins which sum up to i, we can easily find the next state – the solution for i+1.

How can we find it?

It is simple – for each coin j, Vj≤i, look at the minimum number of coins found for the i-Vjsum (we have already found it previously). Let this number be m. If m+1 is less than the minimum number of coins already found for current sum i, then we write the new result for it.


**Contents**

1. ALTARRAY
- [Question Link](https://www.codechef.com/problems/ALTARAY)
- Solutions are on their way!

2. DELISH
- [Question Link](https://www.codechef.com/problems/DELISH)
- Solutions are on their way!

3. DBOY
- [Question Link](https://www.codechef.com/problems/DBOY)
- Solutions are on their way!

4. XORSUB
- [Question Link](https://www.codechef.com/problems/XORSUB)
- Solutions are on their way!

5. GRID
- [Question Link](https://www.codechef.com/problems/GRID)
- Solutions are on their way!

6. TADELIVE
- [Question Link](https://www.codechef.com/problems/TADELIVE)
- Solutions are on their way!

7. FROGV
- [Question Link](https://www.codechef.com/problems/FROGV)
- Solutions are on their way!

8. MATRIX2
- [Question Link](https://www.codechef.com/problems/MATRIX2)
- Solutions are on their way!

9. AMSGAME2
- [Question Link](https://www.codechef.com/problems/AMSGAME2)
- Solutions are on their way!

1. DIVSUBS

- [Question Link](https://www.codechef.com/problems/DIVSUBS)
- Currently Richi's solution and his editorial is present








