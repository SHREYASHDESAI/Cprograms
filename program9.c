/*9. A class teacher wants to keep record of 10 students in the class along with the 
names and marks obtained in 5 subjects. Write a C program with structure that displays :
a) Overall percentage result of the class
b) Total number of passing students in the class,
c) Total number of students failing in one subject
d) Total number of distinctions in the class.*/

#include<stdio.h>

#include <stdio.h>

struct student {
    int s1, s2, s3, s4, s5, total;
} std[10];

int main() 
{
    int i, total, pass = 0, dist = 0, fail = 0;
    float Final_Perc = 0, Overall_Perc,perc;
    char nm[50];

    for (i = 1; i <=10; i++) {
        printf("Enter name of student : ");
        scanf("%s", nm);
        printf("Enter marks of student %d in 5 subjects : \n", i);
        scanf("%d %d %d %d %d", &std[i].s1, &std[i].s2, &std[i].s3, &std[i].s4, &std[i].s5);
        printf("Marks in subject 1 = %d \nMarks in subject 2 = %d \nMarks in subject 3 = %d \nMarks in subject 4 = %d \nMarks in subject 5 = %d \n", std[i].s1, std[i].s2, std[i].s3, std[i].s4, std[i].s5);
        
        total = std[i].s1 + std[i].s2 + std[i].s3 + std[i].s4 + std[i].s5; //total marks of one student
        perc = (float)total / 500 * 100; // Calculate percentage of each student
        Final_Perc += perc; // Accumulate total percentage
        
        printf("Percentage of student %d: %f \n", i , perc);

        // Count number of subjects failed by the student
        int failedSubjects = 0;
        if (std[i].s1 < 40) failedSubjects++;
        if (std[i].s2 < 40) failedSubjects++;
        if (std[i].s3 < 40) failedSubjects++;
        if (std[i].s4 < 40) failedSubjects++;
        if (std[i].s5 < 40) failedSubjects++;

        // If the student failed in exactly one subject
        if (failedSubjects == 1) 
		{
            fail++;
            printf("Student %d failed in exactly one subject\n", i);
        }
        else 
		{
            if (std[i].s1 >= 40 && std[i].s2 >= 40 && std[i].s3 >= 40 && std[i].s4 >= 40 && std[i].s5 >= 40) 
			{
                pass++;
                printf("Student %d passed\n", i);
                if (perc >= 75) 
				{
                    printf("Distinction\n");
                    dist++;
                } else if (perc >= 60) 
				{
                    printf("First Class\n");
                } else if (perc >= 50) 
				{
                    printf("Second Class\n");
                } else if (perc >= 40) 
				{
                    printf("Third Class\n");
                }
            } else
			{
                printf("Student %d failed\n", i);
            }
        }
    }

    printf("Total students who failed in exactly one subject: %d\n", fail);
    printf("Total students who passed: %d\n", pass);
    printf("Total students who got distinction: %d\n", dist);

    Overall_Perc = Final_Perc / 10; // Overall percentage calculation
    printf("Final percentage of whole class is: %f \n", Overall_Perc);

    return 0;
}
