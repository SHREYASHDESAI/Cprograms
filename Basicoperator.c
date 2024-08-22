#include<stdio.h>
int main()
{
	float a,b,sum,diff,prod,quotient,preinc,postinc,predec,postdec;
	int remain,c,d;
	printf("Enter value of a=");
	scanf("%f",&a);
	printf("Enter value of b=");
	scanf("%f",&b);
	printf("Enter value of c=");
	scanf("%d",&c);
	printf("Enter value of d=");
	scanf("%d",&d);
	sum= a+b;
	diff= a-b;
	prod= a*b;
	quotient= a/b;
	remain= c%d;
	printf("Sum = %f\n", sum);
	printf("Diff = %f\n", diff);
	printf("Product = %f\n", prod);
	printf("Quotient = %f\n", quotient);
	printf("preinc = %d\n", ++c);
	printf("postinc = %d\n", c++);
	printf("predec = %d\n", --d);
	printf("postdec = %d\n", d--);
	return 0;
}
     
 	                   