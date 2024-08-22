/*8. Write a program that uses functions to perform the following operations:
a) Reading a complex Number
b) Writing a complex number
c) Addition of two complex numbers
d) Multiplication of two complex numbers.*/

#include<stdio.h>
void data();
void display();
int add();
int multi();

struct complex
{
	int real;
	int img;
}n1,n2,n3;

int main()
{
	int ch;
	printf("Yours Choice are: \nA.Input \nB.Add \nC.Multiply \nD.Display \n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A': 
		data();
		break;
		
		case 'B': 
		add();
		break;
		
		case 'C': 
		multi();
		break;
		
		case 'D':
		display();
		break;
		
		default: 
		printf("Enter a valid choice\n");
	}
}
void data()
{
	printf("Enter real part of 1st complex number:");
	scanf("%d",&n1.real);
	printf("Enter img part of 1st complex number:");
	scanf("%d",&n1.img);
	printf("\nFirst Complex = %d+%di\n",n1.real,n1.img);
	
	printf("\nEnter real part of 2nd complex number:");
	scanf("%d",&n2.real);
	printf("Enter img part of 2nd complex number:");
	scanf("%d",&n2.img);
	printf("\nSecond Complex = %d+%di\n",n2.real,n2.img);	
}
void display()
{
	data();
	
}
int add()
{
	data();
	n3.real = n1.real + n2.real;
	n3.img = n1.img + n2.img;
	printf("\nSum = %d + %di",n3.real,n3.img);
}
int multi()
{
	data();
	n3.real = (n1.real * n2.real) - (n1.img * n2.img);
	n3.img = (n1.real * n2.img) + (n1.img * n2.real);
	printf("\nProduct = %d+%di",n3.real,n3.img);
}



