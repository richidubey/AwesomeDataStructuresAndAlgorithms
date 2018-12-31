## SPOJ-MMAS Editorial by Richi

This problem is listed under ad-hoc problems which means that you don't necessarily need to use stack in this que. My code didn't use stack.

**Algorithm**

Traverse from beginning to end and if you encounter a digit, check whether there is a bracket before the digit. If there is no bracket, simply multiply the element's weight by digit-1(as we already summed it once while traversing). But if there is a bracket before the digit, find the sum of masses enclosed by that bracket and multiply it by digit-1. 

Here finding the elements enclosed by a bracket is little tricky and what I did was to make a recursive function which returns the location of corresponding '(' for a ')' bracket, and whenever we encounter a ')' bracket while finding the '(' for some ')' bracket, we skip the search a little behind the line by searching for '(' of the ')' bracket that we found by recursively calling our own function and backing up our index of search a little bit. 

I know this sounds extremely ridiculous and hard to understand, but please try reading more than once and see the following code for it that I implemented and very soon you would understand everything. 

```cpp
int findpre(int j)
{
	j--;
	
	while(str[j]!='(')
	{
		if(str[j]==')')
		{
			j=findpre(j);
		}
		
		j--;
	}
	
	return j;
}	
```

That's all. If you have any difficulty, feel free to reach me via my mailing address given at homepage of this repo, I'll be more than happy to get back to you.
 
