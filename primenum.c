#include<stdio.h>
int main ()
{
int i,n,num;
printf("Enter The Number you want to check if it is PRIME OR NOT PRIME:");
scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		num = n % i;
	}
	if(num!=0)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not Prime");
	}
	
}