#include<stdio.h>
int main()
{
	float a,r1,r2;
	int b,c,r3,r4;
	printf("Enter value of a = ");
	scanf("%f",&a);
	printf("Enter value of b = ");
	scanf("%d",&b);
	printf("Enter value of c = ");
	scanf("%d",&c);
	printf("r1 = %f\n", a++);
	printf("r2 = %f\n", ++a);
	printf("r3 = %d\n", b++);
	printf("b = %d\n",b);
	printf("r4 = %d\n", ++c);
	return 0;
}