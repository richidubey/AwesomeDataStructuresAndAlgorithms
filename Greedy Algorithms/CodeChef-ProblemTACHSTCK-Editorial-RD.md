## Chopsticks - Editorial by Richi

Greedy Algorithm questions are usually very easy and they have to be solved in the first method that comes up in your brain. 
One should not think much for a greedy question. In a way, they are implemented like Brute-Force.

* __Hint__

Use sort function in stl ( Standard Template Library ) of C++. It can be used by including the bits/stdc++.h header file.

* __Algorithm and Implementation__

After sorting, just look up for the next element, if it is within the extended limit, increase the count and skip to the
element after it and keep doing it till the n-1 elements ( since there is no next element for the n-th element).

* __Riddle__

I was stuck at thinking that this way wont work because for the case: 1,3,3,5 and d=2 there are two possible combinations: 1-3 and 3-5
but I thought that according to our algorithm, 3 and 3 would be paired together as they are consecutive elements and also have difference
less than 2. But that doesn't happen since we are starting with the smallest number and then compare it with the next one( So the case where 
pairing up with same number would cause a difficulty for a smaller number won't exist).

I struggled with this for an hour and wrote many long complex code, Want to have a look on my other (in-effective TLE) codes ? 
Here's the link : 
[Other Codes](https://www.codechef.com/status/TACHSTCK,ilovemetoo)

* _Difficulty_ : 2/5


