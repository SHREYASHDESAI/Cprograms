#include<stdio.h>
int main()
{
	int a=1,b=2,c=4,d=5,e=6,f=7;
	c *= b;
	d += b;
	e -= b;
	f /= b;
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
}