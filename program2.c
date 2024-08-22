/*2.Write a program to accept marks of five courses and if student is pass then find the grade obtained by student. If student scores aggregate 
greater than 75%, then the grade is distinction. If aggregate is 60>and <75 then the grade is first division. If aggregate is >=50 and <60 then 
the grade is second division. If aggregate is >=40 and <50 then the grade is third division.*/
#include<stdio.h>
int main()
{
	int i,total;
	float perc;
	int sub[5];
	for(i=1;i<=5;i++)
	{
		printf("Enter marks in Subject %d : ",i);
		scanf("%d",&sub[i]);
	}
	printf("-------------------------------------\n");
	/*for(i=1;i<=5;i++)
	{
		printf("Marks in Subject %d are: %d \n",i,sub[i]);
	}
	*/
	total = sub[1] + sub[2] + sub[3] + sub[4] + sub[5];
	printf("Total Marks Obtained = %d \n",total);
	printf("-------------------------------------\n");

	perc = 100.0 * (total/500.0);
	printf("Percentage = %f\n",perc);
	printf("-------------------------------------\n");

	for(i=1;i<=5;i++)
	{
		if(sub[i]<40)
		{
		printf("Failed in Subject %d\n",i);
		}
	}
	printf("-------------------------------------\n");
	printf("GRADE = ");
	if(sub[1]>=40 && sub[2]>=40 && sub[3]>=40 && sub[4]>=40 && sub[5]>=40)
	{
		if(perc >= 75)
		{
			printf("Distintinction\n");
			printf("-------------------------------------\n");
	    }
	    else if(perc >=60 && perc <75)
		{
			printf("First Division\n");
			printf("-------------------------------------\n");
	    }
	    else if(perc >=50 && perc <60)
		{
			printf("Second Division\n");
			printf("-------------------------------------\n");
	
	    }
	    else if(perc >40 && perc <50)
		{
			printf("Third Division\n");
			printf("-------------------------------------\n");
	
	    }
	}
    else
    {
    	printf("Failed\n");
    	printf("-------------------------------------\n");
 
	}

}

