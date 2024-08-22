#include<stdio.h>
int main()
{
    printf("Enter marks of each subject one by one \n");
    float marks[5];n
    float perc,total=0;
    int i,j;
    for(i=0;i<=4;i++)
    {
        scanf("%f",&marks[i]);
    }
    for(j=0;j<=4;j++)
    {
        total=total+ marks[j];
    }
    perc=total*100/500;
    printf("Percentage is : %f \n",perc);
    if(perc>=75)
    {
        printf("Grade is : Distinction");
    }
    else if(perc>=60 && perc<75)
    {
        printf("Grade is : First Division");
    }
    else if(perc>=50 && perc<60)
    {
        printf("Grade is : Second Division");
    }
    else if(perc>=40 && perc<50)
    {
        printf("Grade is : Third Division");
    }
    else{
        printf("You failed");
    }
}