/*1. Write a program to calculate the salary of an employee given his basic pay (take input
from user). Calculate gross salary of employee. Let HRA be 10% of basic pay and TA be 5% of
basic pay. Let an employee pay professional tax as 2% of total salary. Calculate net salary
payable after Deduction.*/
#include<stdio.h>
int main()
{
	float bp,gs,hra,ta,tax,ns;
	printf("Enter the Basic Pay of the Employee:\n");
	scanf("%f",&bp);
	
	hra = 0.1 * bp;
	ta = 0.05 * bp;
	printf("HRA = %f\n",hra);
	printf("-------------------------------------\n");
	printf("TA = %f\n",ta);
	printf("-------------------------------------\n");
	
	gs = bp + (hra + ta);
	printf("Gross salary = %f\n",gs);
	printf("-------------------------------------\n");
	
	tax = 0.02 * gs;
	printf("Tax = %f\n",tax);
	printf("-------------------------------------\n");
	
	ns = gs - tax;
	printf("Net salary = %f\n",ns);
	printf("-------------------------------------\n");
}