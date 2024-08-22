#include<stdio.h>
void math(int x, int y, int *s, int *d);

int main()
{
	int a=20, b = 10, sum,diff;
	math(a,b,&sum,&diff);
	printf("sum =%d diff=%d",sum,diff);
	
}

void math(int x, int y, int *s, int *d)
{
	 *s = x+y;
	 *d = x-y;
}
	