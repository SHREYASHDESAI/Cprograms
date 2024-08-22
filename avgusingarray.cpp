#include<stdio.h>
int main()
{
	int n,i;
	float avg,sum;
	printf("How many number's average you want to find? ");
	scanf("%d",&n);
	int num[n];
	printf("Enter the numbers :\n");
	for(i=1;i<=n;i++)
	{
		
		scanf("%d",&num[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum = sum + num[i];
		avg = sum/n;
	}
	printf("Average of the Enter Numbers = %f",avg);
}