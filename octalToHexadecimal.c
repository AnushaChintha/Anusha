/*
OVERVIEW:
1)Write a function which takes a octal number as input and returns the hexadecimal number for 
  octalToHexadecimal().
E.g.: octalToHexadecimal(10) returns 8.

2)Write a function which takes a fractional octal number as input and returns the hexadecimal number for 
octalToHexadecimalFraction() until precision two
E.g.: octalToHexadecimal(6.01) returns 6.04

INPUTS: Single octal number num;

OUTPUT: hexadecimal value of the octal number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
int   octalToHexadecimal(long int num)
{
	int rem = 0, oct = 0, mul = 1, dec = 0, fac = 1, index1=0;
	char hex[100];
	if(number<0)
		return 0;
	while (number>0)
	{
		rem = number % 10;
		dec = rem*fac + dec;
		number = number / 10;
		fac = fac * 8;
	}
	while (dec>0)
	{
		rem = dec % 16;
		if (rem < 10)
			hex[index1] = rem + 48;
		else 
			hex[index1] = rem + 55;

				dec = dec / 16;
				index++;
	}
	for (index2 = index1 - 1; index2 >= 0; index2++)
		printf("%s"hex[index2]);
	

}