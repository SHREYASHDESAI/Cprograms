#include<stdio.h>
struct student {
    int fail_no;
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    float percentage;
	}std[10];

   
int main()
{
    int i;
    int onesubfail = 0;
    float overall = 0;
    int totalpassing = 0;
    int distinction = 0;
    //for loop to input marks of 10 students in 5 subjects
    for(i=1;i<=10;i++)
    {
    	std[i].fail_no=0;
    	printf("Enter the marks of Student %d in 5 subjects :\n" ,i);
    	scanf("%d",&std[i].sub1);
        if(std[i].sub1<40)
	      std[i].fail_no++;
        scanf("%d",&std[i].sub2);
        if(std[i].sub2<40)
          std[i].fail_no++;
        scanf("%d",&std[i].sub3);
        if(std[i].sub3<40)
          std[i].fail_no++;
        scanf("%d",&std[i].sub4);
        if(std[i].sub4<40)
          std[i].fail_no++;
        scanf("%d",&std[i].sub5);
        if(std[i].sub5<40)
          std[i].fail_no++;
        
        //if condition to calculate no. of students failed in exactly 1 subject
		if(std[i].fail_no==1)
		{
        	onesubfail++;
		}
		
		std[i].percentage = (std[i].sub1 + std[i].sub2 + std[i].sub3 + std[i].sub4 + std[i].sub5 )*100/500;	
	}
	printf("Total number of Students failed is : %d\n",std[i].fail_no);
	//for condition to calculate total passing students and distinction studnets
	for(i=1;i<=10;i++)
	{
    	overall = overall + std[i].percentage;
    	if(std[i].sub1>40 && std[i].sub2>40 && std[i].sub3>40 && std[i].sub4>40 && std[i].sub5>40)
		{
    		totalpassing++;
    		if(std[i].percentage>=75)
			{
    			distinction++;
			}
		}
		
	}
	overall = overall/10; //to calculate overall class percentage
	
	printf("Overall Percentage of class : %f\n",overall);
	printf("Total Number of Student passed : %d\n",totalpassing);
	printf("Total Number Of Student failed in exactly one subject : %d\n",onesubfail);
	printf("Total Students passed with distiction: %d\n",distinction);
	
	return 0;	 
}



 

