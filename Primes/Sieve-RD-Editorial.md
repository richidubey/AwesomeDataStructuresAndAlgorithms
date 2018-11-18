Sieve of Eratosthenes is known as one of the most efficient ways to calculate prime upto a given number and is used quite extensively in competitive programming.

It starts off by visiting numbers from 2 to n(since 1 isn't prime) and maintains a bool array corresponding to every element as false initially.

If it encounters a numbers whose value is still false, it then saves it as prime and marks its value and all its corresponding multiples value as true.

>This is based on the idea that a number is prime, if none of the smaller prime number divides it.

**Code Explanation**

 So my code is :
 
 	>bool vis[MAXN]={false};
	 v.push_back(2);
	
	 for(int i=3;i<MAXN;i+=2) 
	 {
	 	if(!vis[i]) 
		{
			v.push_back(i);
			for(int j=i*i;j<MAXN;j+=i) 
				  vis[j]=true;
		}
	 }


From iterate 3 till our maximum number, and it is optimized as we are skipping 4,6,8 and all even numbers as they are not primes and all divisible by 2.
Then  if that number is not already visited, it means it is prime and then we mark all its multiple as prime, here it is also optimized by knowing that all the smaller multiples of i(the current prime) also have a prime factor which is less than i(our current number, so it has already been marked). Increasing by i each times gets us its multiples.

That's All!! 
Thanks for reading!
