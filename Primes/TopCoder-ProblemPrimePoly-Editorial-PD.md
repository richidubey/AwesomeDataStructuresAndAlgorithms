So this is a very common type of problem which involves you to think mathematically about the situation. Most of the problems in computer science which involves mathematics require you to think something that can make the brute force method work more efficiently.

Beginners may find this problem a little bit more challenging, but be aware that this is only normal, as you'd keep practicing and seeing new types of problems, you will soon be quickly able to comprehend what you need to do in order to solve the problem.

Talking about this problem, we are given a polynomial which returns Prime numbers until a specific number. We have to find that specific number for which this equation does not return a prime number. So basic idea would be starting from 0, we can compute the value of polynomial and then see if that number is prime or not. If it's prime then we continue incrementing our index, otherwise we return the index.

Well, this approach is exactly how you should proceed with this problem, except that we can't use brute force for finding that the value of polynomial is prime or not. Why? Because of this:

**Rule of Thumb:** Two Brute force methods in one question --> very bad for efficiency

So to find that the number is Prime or not, we will use [Sieve's Algorithm](https://github.com/Pradyuman7/AwesomeDataStructuresAndAlgorithms/blob/master/Primes/SieveAlgorithm-Editorial-PD.md).

That's the whole logic and algorithm for this problem, to summarize it looks like this:

> Start `i` from 0 and compute value of the polynomial at `i`

> Use Sieve's Alorithm to find if the number found is Prime or not

> If it's prime continue incrementing `i`

> If it's not prime return `i`

**Problem Level: Average**
