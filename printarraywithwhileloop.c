#include <stdio.h>

int main() {
    // Initializing an array
    int myArray[5] = {1, 2, 3, 4, 5};
    // Printing array elements with while loop
    int i=0;
    while(i < 5) 
	{
        printf("%d ", myArray[i]);
        i++;
    }
    
    return 0;
}