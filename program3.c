/*3. Write a program to check whether given number is Prime or not. Take a number as input
from user.*/

#include<stdio.h>
int main()
{
	int n,i,check=0;
	printf("Enter a number to check prime or not: \n");
	scanf("%d",&n);
	
	if(n==1 || n==0)
	{
		printf("Neither Prime nor Composite");
	}
	else
	{
		for(i=2;i<=n-1;i++)
		{
			if(n%i==0)
			{
				check=1;
				break;
			}
		}
		
		if(check==0)
		{
			printf("Prime Number");
		}
		else
		{
			printf("Not a Prime Number");
		}
	}
}