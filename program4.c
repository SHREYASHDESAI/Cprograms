/*4. Write a program to accept n number of element from user (where, n is specified by user)
and stores data in an array and display the largest element of that array using loops.*/

#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	int num[n];
	printf("Enter the numbers : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("[ ");
	for(i=0;i<n;i++)
	{
		printf("%d ",num[i]);	
	}
	printf("]");	
	for(i=0;i<n;i++)
	{
		if(num[0]<num[i])
		{
			num[0]=num[i];
		}
	}
printf("\nGreatest number is : %d",num[0]);
}