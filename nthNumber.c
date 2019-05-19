/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int nthFibonacci(int n)
{
	int first = 0, next, index;
	int second = 1;
	if (n <= 0)
		return -1;
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	for (index = 2; index <= n; index++)
	{
		next = first + second;
		first = second;
		second = next;
	}
	
	return next;
}

int nthPrime(int num)
{

	int index1, index2, prime=3;
	if (num<=0)
	{
		return -1;

	}
	if (num == 1)
	{
		return 2;
	}
	if (num == 2)
	{
		return 3;
	}
	for (index1 = 4; prime <= num; index1++)
	{
		for (index2 = 2; index2 < index1; index2++)
		{
			if (index1%index2 == 0)
				break;
		}
		if (index1 == index2)
			prime++;
	}
	return index1;
}