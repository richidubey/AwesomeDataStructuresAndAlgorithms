This is a very basic problem that comes in many forms during real coding competitions. Bitwise XOR, Bitwise OR, Bitwise And, some of those common to be seen terms in coding problems. These look somewhat difficult but, in real they aren't. If you don't know much about them, I would talk about them in brief here.

So a bitwise operation operates on one or more bit patterns or binary numerals at the level of their individual bits. It is a fast and simple action, directly supported by the processor, and is used to manipulate values for comparisons and calculations. As you may be knowing, every computer operates nowadays in bytes, but teh at unit level bytes are formed with bits of 0 and 1.

Also, if you know basic Mathematics about logic and such operations, this should be very easy for you.

> XOR returns 1 only when both bits are NOT same

> OR returns 0 only when both bits are 0

> And return 1 only when both bits are 1

This was some basic flash-back that you may need to understand the question.

However you have bitwise operations present in almost every programming languages, in Java this can be summarized as follows:

![screenshot 2018-11-22 at 4 55 05 am](https://user-images.githubusercontent.com/41565823/48880921-e09ce200-ee12-11e8-9a78-5547132aa5ea.png)

For the algorithm of this problem, I have used a very basic and easy appraoch that takes O(n*log n) time in worst case, which is not too bad (but can be improved). So the algorithm in words is as follows:

> Sort the array

> Find XOR of all pairs in the array which are next to each other

> Compare them with your `maxXOR`, which you can initiallise to `Integer.MIN_VALUE`, and if the present XOR is greater than one in `maxXOR`, substitute the value in `maxXOR`

> Continue to the end, and the one in last will be the maximum XOR needed in the problem.

**Problem Level: Easy**
