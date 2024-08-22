#include<stdio.h>
int main()
{
	float bp,hra,da;
	printf("Enter Basic Salary:");
	scanf("%f",&bp);
	if(bp<1500)
	{
		hra=0.1*bp;
		da=0.9*bp;
	}
	else
	{
		hra=500;
		da=0.98*bp;
	}
	printf("HRA = %f and DA = %f",hra,da);
}