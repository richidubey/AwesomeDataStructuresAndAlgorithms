GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that divides both of them.
For example GCD of 20 and 28 is 4 and GCD of 98 and 56 is 14.

A simple way to find GCD is to factorize both numbers and multiply common factors.

![screenshot 2018-11-24 at 7 31 22 am](https://user-images.githubusercontent.com/41565823/48965314-01a03700-efbb-11e8-9091-97ebf8d693c2.png)

**Basic Euclidean Algorithm for GCD**

The algorithm is based on the following facts:

- If we subtract smaller number from larger (we reduce larger number), GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.

- Now instead of subtraction, if we divide smaller number, the algorithm stops when we find remainder 0.


**Extended Euclidean Algorithm:**

The extended Euclidean algorithm updates results of gcd(a, b) using the results calculated by recursive call gcd(b%a, a). Let values of x and y calculated by the recursive call be x1 and y1. x and y are updated using below expressions.
