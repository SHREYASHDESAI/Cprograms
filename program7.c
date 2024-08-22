/*7.Write a program to swap values of two elements. Use function and pass argument using
call by Value and call by reference.*/

#include<stdio.h>
void cbv(int x,int y);
void cbr(int *p1,int *p2);
int main()
{
 	int a,b,c,d;
 	
 	printf("Enter two numbers: \n");
 	scanf("%d %d",&a,&b);
 	printf("Values before swap are : %d %d \n",a,b);
 	
 	cbv(a,b);
 	cbr(&a,&b);
}
void cbv(int x,int y)
{
	int z;	
	z=x;
	x=y;
	y=z;
	
	printf("Values after swapping are by values : %d %d \n",x,y);
}
void cbr(int *p1,int *p2)
{
	int m;
	
	m=*p1;
	*p1=*p2;
	*p2=m;
	
	printf("Values after swapping are by reference : %d %d \n",*p1,*p2);
	
}
