/* 5.Write a C program to store N numbers in an array and compute the sum of all even and
odd numbers in an array.*/
#include<stdio.h>
int main()
{
	int i,N,evensum=0,oddsum=0;
	printf("Enter the number of elements in the Array : ");
	scanf("%d",&N);
	int num[N];
	printf("Enter the numbers : \n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("num = [ ");
	for(i=0;i<N;i++)
	{
		printf("%d ",num[i]);	
	}
	printf("]\n");
	
	for(i=0;i<N;i++)
	{
		if(num[i]%2==0)
		{
			evensum = evensum + num[i];
		}
		else
		{
			oddsum = oddsum + num[i];
		}
	}
	printf("\nEven = [ ");
	for(i=0;i<N;i++)
	{
		if(num[i]%2==0)
		printf("%d ",num[i]);	
	}
	printf("]\n");
	
	
	printf("\nOdd = [ ");
	for(i=0;i<N;i++)
	{
		if(num[i]%2!=0)
		printf("%d ",num[i]);	
	}
	printf("]\n");
	
	num[0]=num[i];
	printf("\nSum of Even Numbers = %d",evensum);
	printf("\nSum of Odd Numbers = %d",oddsum);
	
	for(i=0;i<N;i++)
	{
		if(num[i]%2==0)
		{
			if(num[i]>num[0])
			{
				num[0]=num[i];
			}
		}	
	}
	printf("\nMaximum Even Number = %d\n",num[0]);
	
	printf("\nMaximum Even Number Square = %d\n",num[0]*num[0]);
	

	for(i=0;i<N;i++)
	{
		if(num[i]%2!=0)
		{
			if(num[0]<num[i])
			{
				num[0]=num[i];
			}
		}	
	}
	printf("\nMinimum of Odd Number = %d\n",num[0]);
	
	printf("\nMinimum of Odd Number Square = %d\n",num[0]*num[0]);
	
}