## Editorial for Finding Longest Increasing Subsequence 

**Algorithm and Implementation**

Here each number has atleast 1 increasing subsequence associated with it, i.e. the number with itself. For finding the other subsequence, we'll check all the numbers(smaller than current number) behind the current number in our array and add the length of longest subsequence till now for that number by 1, which means our current number will extend the longest subsequence having biggest element smaller than current element.

-Variables used: 

's[i]' :Stores length of longest subsequence of number in index i
'cmax' : Can be thought of as current max. It stores the max of the s[i]'s till now, where i is less than index of our current number in consideration.
'pmax' : Will store the index of the number whose subsequence we will extend, basically the element at pmax will have biggest s(subsequence) till now.
'max'  : Maximum of all the s[i]. It'll give the answer when we traverse through entire array.


__*Difficutly*__: 2/5.