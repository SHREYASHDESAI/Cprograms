/*7. Write a program to calculate the salary of an employee given his basic pay (take input 
from user). Calculate gross salary of employee. Let HRA be 10% of basic pay and TA be 5% of 
basic pay. Let an employee pay professional tax as 2% of total salary. Calculate net salary 
payable after Deduction.*/

#include<stdio.h>
int main()
{
float basicsalary, HRA, TA, grosssalary, netsalary, tax;
printf("Enter basic salary of the Employee: ");
scanf("%f",&basicsalary);
printf("------------------------------------------");

HRA = 0.1 * basicsalary;
printf("\nHRA is: %.2f \n",HRA);
printf("------------------------------------------");

TA = 0.05 * basicsalary;
printf("\nTA is: %f \n",TA);
printf("------------------------------------------");

grosssalary = basicsalary + HRA + TA;
printf("\nTotal Salary is: %f \n",grosssalary);
printf("------------------------------------------");

tax = 0.02 * grosssalary;
printf("\nTax is : %f \n",tax);
printf("------------------------------------------");

netsalary = grosssalary - tax;
printf("\nNet Salary is : %f \n",netsalary);
printf("------------------------------------------");

}

