#include <stdio.h>

int main() {
    // Initializing an array
    int myArray[5] = {1, 2, 3, 4, 5};
    printf("%d \n", myArray[1]); // printing specific element
    // Printing array elements
    for (int i = 0; i < 5; i++) 
	{
        printf("%d ", myArray[i]);
    }
    
    return 0;
}