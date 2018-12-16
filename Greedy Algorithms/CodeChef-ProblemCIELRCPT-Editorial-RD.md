## Ciel and Receipt : Editorial by Richi

* __Algorithm :__

In this question, we have to tell the num of min 2's power number needed to sum up to a given number. If you guys know 
binary numbers, then this is equivalent to finding number of 1's in its binary representation.( Because that is what we do in converting
a number to binary, we represent it in sum of maximum 2's power less than the current number).

* __Implementation :__

Taking log base 2 of a number would give out the power of maximum 2's power just smaller than that number(if log is taken in int) and subsequently
taking its power by 2 would give the needed number. Substract this maximum power from number and increase the count of number of elements used by 1 and
keep doing this until we get 0.( We'll get a 0 when the number becomes a multiple of 2, so log base 2 would be an exact integer).



* __Used functions :__

-log2(int a) gives log base 2 of integer a
-pow(int b,int c) returns b raised to the power of c

Both of them can be used by including the header file <cmath> or <math.h>


* _Difficulty_ : 1/5 