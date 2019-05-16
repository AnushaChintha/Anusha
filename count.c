int fun(int num1, int num2)
{
int index, count=0;
if(num1<=0 || num2<=0)
return -1;

for (int index = num1; index <= num2; index++)
{
	if (index % num1==0)
	count++;
else 
	continue;
}
return count;
	
}