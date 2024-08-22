#include<stdio.h> //find size of int,char,long,long long,double, long double
int main()
{
	sizeof(int);
	printf("%zd\n",sizeof(int));
	sizeof(char);
	printf("%zd\n",sizeof(char));
	sizeof(long);
	printf("%zd\n",sizeof(long));
	sizeof(long long);
	printf("%zd\n",sizeof(long long));
	sizeof(double);
	printf("%zd\n",sizeof(double));
	sizeof(long double);
	printf("%zd\n",sizeof(long double));
	sizeof(short);
	printf("%zd\n",sizeof(short));
	
}