#include<stdio.h>
int main()
{
	int a= 60; // 0011 1100
	int b= 13; // 0000 1101
	int x= 255; // 0000 0000 0000 0000 1111 1111  ; actually there are those empty 0000 coz int can store 32 bits data(4 bytes)
	int c,d,e,f,g,j,t,y,z;
	c = a & b; /* 0000 1100 because 0011 1100
									0000 1101
									__________
									0000 1100 = 12*/
	d = a | b; //0011 1101
	e = a ^ b; 
	f = ~a;
	g = a<<2; // shifts everybit of a to left by 2 places           
	j = b>>1; // shifts everybit of b to right by 1 place 1000 0110
	t = b>>3; 
	y = x<<4; // 0000 0000 0000 1111 1111 0000
	z = x>>4; // 0000 0000 0000 0000 0000 1111
	printf("c = %d \n", c);
	printf("d = %d \n", d);
	printf("e = %d \n", e);
	printf("f = %d \n", f);
	printf("g = %d \n", g);
	printf("j = %d \n", j);
	printf("t = %d \n", t);
	printf("y = %d \n", y);
	printf("z = %d \n", z);
	return 0;
}