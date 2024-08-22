#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
} s1,s2;

int main() {
    printf("Enter information:\n");

    // Input for name
    printf("Enter name of student 1: ");
    scanf("%s", s1.name);
    printf("Enter name of student 2: ");
    scanf("%s", s2.name);

    // Input for roll number
    printf("Enter roll number of student 1: ");
    scanf("%d", &s1.roll);
    printf("Enter roll number of student 2: ");
    scanf("%d", &s2.roll);

    // Input for marks
    printf("Enter marks of student 1: ");
    scanf("%f", &s1.marks);
    printf("Enter marks of student 2: ");
    scanf("%f", &s2.marks);

    // Displaying Information of student 1
    printf("Displaying Information of Stdent 1:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.roll);
    printf("Marks: %.1f\n", s1.marks);

	 // Displaying Information of student 2
	printf("Displaying Information of Stdent 2:\n");
    printf("Name: %s\n", s2.name);
    printf("Roll number: %d\n", s2.roll);
    printf("Marks: %.1f\n", s2.marks);
    return 0;
}
