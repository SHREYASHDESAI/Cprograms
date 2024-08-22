#include<stdio.h>
int main()

{
float length,breadth,area,perimeter;
printf("Enter the length and breadth of the rectangle:");
scanf("%f %f", &length ,&breadth);
area = length * breadth;
perimeter = 2 * (length + breadth);
printf("The Area of the Rectangle = %f \n The Perimeter of the Rectangle= %f ", area,perimeter);
return 0;
} 