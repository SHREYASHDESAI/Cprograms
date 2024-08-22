#include<stdio.h>
int main()
{
float salary, HRA, TA, TotalSalary, NetSalary,Tax;
printf("Enter basic salary ");
scanf("%f",&salary);
HRA=10*salary/100;
printf("\nHRA is: %f ",HRA);
TA=(5*salary)/100;
printf("\nTA is: %f ",TA);
TotalSalary=salary+HRA+TA;
printf("\nTotal Salary is: %f",TotalSalary);
Tax=(2*TotalSalary)/100;
printf("\nTax is : %f ",Tax);
NetSalary=TotalSalary-Tax;
printf("\nNet Salary is : %f ",NetSalary);
}
