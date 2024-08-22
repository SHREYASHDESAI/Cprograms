/*6.Write a program generate Fibonacci series with and without using recursive function.*/

//without recursion
/*#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	a = 0,b = 1;
	printf("Fibonaaci Series is of n terms:");
	scanf("%d",&n);
	printf("%d  %d ",a,b);
	for(i=1;i<=n-2;i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(" %d ",c);
	}	
}*/

//with recursion
#include <stdio.h>
int recursive(int n)
{
    if(n<2)
	{
        return n;
    }
    else
	{
		return recursive(n-1) + recursive(n-2);
	}
    
}

int main() {
    int n,i,series;
    printf("Fibonaaci Series is of n terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		series = recursive(i);
        printf("%d ",series);
    }
}
























































