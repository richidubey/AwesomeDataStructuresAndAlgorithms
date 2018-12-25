This is a good example of question that looks very easy at first glance and then make you trip over, just because of that illusion. This is the only question that took me longer than 1 hour to solve in this thread, just because I couldn't gauge it's difficulty and logic, beforehand. 

**So the tip: To become a good competitive coder, learn to read and understand the question properly before coding it out.**

This problem is solely based on how you see the datastructures like arrays or maps, yourself. If you understand what the question is trying to tell and have grip over data structures that can help you organize the data and compute the result, then you're all done.

My algorithm is based on simple observations of the question and example test cases, that are:

> If you've `x` unique bands in the list, compute the result with song lengths with mimimum of length from all unique bands.<br>
> Then add the remaning songs with their length in increasing order.

This logic is due to the fact that sweetness of the song has been decided as the length of song multiplied by number of bands listened before. So to maximize this, you've to have unique bands with smaller length multiplied with smaller number and larger lengths with more number of previous bands listened.

The algorithm is just logic, so refer my code for full understanding.

This may seem a bit vague to understand, if you're just reading this editorial without trying the question yourself.

**Problem Level: Easy**
