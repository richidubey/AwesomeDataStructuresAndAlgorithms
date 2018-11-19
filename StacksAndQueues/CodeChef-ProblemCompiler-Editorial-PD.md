Now this is a very easy problem, which is totally made for using Stack, and if you're learning and trying to implement stack, you should probably solve this using it only. But, I didn't. Why? Well, first off because I really don't care unless I am getting better performance, and second I dont like using `import` too much.

The whole problem just requires you to think how to make a string parser which counts the occurence of characters `>` and `<` in a String.

**FUN FACT:** Java String can hold maximum of 2^31 - 1 characters, as this is `Integer.MAX_VALUE` (always 2147483647 (231 - 1) by the Java specification, the maximum size of an array, which the String class uses for internal storage) or half your maximum heap size (since each character is two bytes), whichever is smaller.

So the algorithm I have used in the code has worst case performance of `O(n)`, and is based on simple observation, that is:

> Loop through the string of characters

> Take account of occurence of `>` by decrementing a variable named `count` and incrementing it otherwise.

> If we get `count` as 0 then answer is number of characters looped + 1.

> If count is less than 0 anywhere, we break, as we find that number of occurence of other character is more.

**Bonus Tip:** Make sure you understand the problem fully before coding it, as this is what DSA is all about.

**Problem Level: Very Easy**
