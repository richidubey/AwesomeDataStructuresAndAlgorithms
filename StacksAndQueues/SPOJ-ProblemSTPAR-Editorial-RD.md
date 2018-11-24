## Editorial For Street Parade - SPOJ

As you'll get to the end of this editorial you'll realize that this question uses Stack.
Now for people who dont know:
>STACK implements LIFO: Last In First Out of objects,the object which enters last is the first one to get out.<br/><br/>
>Vector is an amazing predefined data type in C++, which can be used as both queue and stack. It has various functionalties in it like push_back(),pop_back(),remove()


[To learn more about vectors,Click here](https://www.geeksforgeeks.org/vector-in-cpp-stl/ "Vectors: Richi's Editorial")


As always, take up a lot of inputs and check out how our algorithm should work,

**Sample Inputs And Outputs**

-12345 <br />yes<br /><br />
-54321 <br />yes<br /><br />
-51243 <br />yes<br /><br />
-53214 <br />yes<br /><br />

**Algorithm to be implemented**<br />
Basic Ideas is to put any car which is not the current minimum of all cars in side track and check if the cars in side-track or in main-track is current minimum and to remove such a car if it is there. 


So we'll maintain two vectors, one will contain the original input and the other will contain the elements of the side-street. Also, we'll maintain an array which will have all elements(car-numbers) in sorted manner(in ascending order) and in the first loop, we'll aim at either moving cars from main track onto final track or the side track, while always checking first if the cars on side-track can come out now.The associated coding part for it is :
	
~~~cpp
for(i=0;i<v1.size();i++)
	{
		if(v2.size()!=0)
		{
			if(v2[v2.size()-1]==arr[ia])
			{
			  while(v2[v2.size()-1]==arr[ia])
			  {
			  	v2.pop_back();
			  	ia++;
			  }
			}
		}
		if(v1[i]==arr[ia])
		{
			ia++;
		}
		
		else
		{
			v2.push_back(v1[i]);
		}
	}
	
~~~

Here v1.size() tells the size of the first vector, that is the vector containing cars in original order.

After this, if all the cars are taken out(ia-the index corresponding to cars in increasing order reaches is max point=n)then we print "yes".If not then, otherwise we try to empty out side track in ascending order manner for as long as we can,if we can't we print "no".
Code for it is:
	
~~~cpp
if(ia==n)
	{
		cout<<"yes"<<endl;
		
	}
	else
	{
		if(v2[v2.size()-1]==arr[ia])
			{
			  while(v2[v2.size()-1]==arr[ia])
			  {
			  	v2.pop_back();
			  	ia++;
			  }
			}
		if(ia!=n)	
		cout<<"no"<<endl;
		
		else
		cout<<"yes"<<endl;
	}
	
~~~


Here in line 68, we check if last element in the side track(the car that can go out) corrseponds to the next car that is supposed to go out, if it is we remove it. We repeat this until side track(v2) gets empty or the order doesn't match, whichever comes earlier.

I think this pretty much sums it all up.!!

Thanks for being till the very end. We love you! 
