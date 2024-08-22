/*3. Write a program to check whether given number is Prime or not. Take a number as input
from user.*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number to check prime or not: \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("Not a Prime Number");
		}
		else if(n==1)
		{
			printf("Neither prime nor composite");
		}
		else
		{
			printf("Prime Number");
		}
	}
}