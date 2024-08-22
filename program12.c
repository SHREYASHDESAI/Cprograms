/*12. Write C program to find factorial of a number using recursion.*/
#include<stdio.h>
int rec(int);
int main()
{
	int a,fact;
	printf("Enter a Number whose factorial you want to calculate:");
	scanf("%d",&a);
	fact = rec(a);
	printf("Factorial = %d",fact);
}
int rec(int x)
{	
	
	if(x==1 || x==0)
	{
		return 1;	   
	}
	else 
	{
		x = x * rec(x-1);
		return x;
	}        
}    