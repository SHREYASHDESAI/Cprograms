/*15. Write a program in C to find the maximum number between two numbers using a pointer*/
#include<stdio.h>
int main()
{
	int a,b,*p1,*p2;
	printf("Enter to numbers: ");
	scanf("%d %d",&a,&b);
	p1=&a; //storing address of a in p1
	p2=&b;
	
	if(*p1 > *p2) //value stored at address of a > value stored at address of b ?;
	{
		printf("%d > %d",*p1,*p2);	
	}
	else if(*p1 < *p2) //value stored at address of a > value stored at address of b ?;
	{
		printf("%d < %d",*p1,*p2);	
	}
	else if(*p1 = *p2) //value stored at address of a = value stored at address of b ?;
	{
		printf("%d = %d",*p1,*p2);	
	}
	
}
