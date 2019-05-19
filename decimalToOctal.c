/*OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
int decimalToOctal(int number)
{
int rem=0, oct=0, mul=1;
while(number>0)
{
rem=number%8;
oct=rem*mul+oct;
mul=mul*10;
number=number/8;
}
return oct;
}
float decimalToOctalFraction(float number)
{
int i,index,n;
float f,o, sum;
 n=number;
f=number-n;
o=decimaltooctal(n);
for(index=0;index<2;index++)
{
f=f*8;
i=f;
f=f-i;
sum=(sum*10)+i;

}
sum=sum/100;
sum=sum+o;
return sum;


}