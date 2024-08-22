#include<stdio.h>
int reverse(int x)
{
	int rem,sum=0;
    while(x!=0)
    {
        rem=x%10;
        sum=sum*10+rem;
        x /= 10;
    }
    return sum;
}

int main()
{
    int num,rev_num;
    printf("Enter a number to reverse it ");
    scanf("%d",&num);
    rev_num = reverse(num);
    printf("Reversed number is %d",rev_num);
}