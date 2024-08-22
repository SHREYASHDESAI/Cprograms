#include<stdio.h>
#include<string.h>

int main(){

    char name1[50],name2[50];

    printf("Enter a string : ");
    scanf("%s",name1);

	int a = strlen(name1); 

	
    printf("\nLength of string = %d",a);
    printf("\nReversed string = %s",strrev(name1));
 	
 	strrev(name1);
 	
    printf("\nEnter another string : ");
    scanf("%s",name2);

    printf("\nConcatenation = %s",strcat(name1,name2));

    strcpy(name1,name2);
    printf("\nFirst String = %s",name1);
}