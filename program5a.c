#include<stdio.h>
int main()
{
int i,j,k,n,even=0,odd=0;
printf("Enter n numbers : ");
scanf(" %d ",&n);
int arr[n];
for(i=0;i<=n-1;i++)
{
scanf("%d",&arr[i]);
}
for(j=0;j<=n-1;j++)
{
if(arr[j]%2==0)
{
even=even+arr[j];
printf("Even number is : %d",arr[j]);
printf("\n");
}
else
{
odd=odd+arr[j];
printf("odd number is : %d",arr[j]);
printf("\n");
}
}
printf("Total of even numbers : %d  \n",even);
printf("Total of odd numbers : %d ",odd);
}

