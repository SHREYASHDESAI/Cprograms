#include<stdio.h>

// Define a structure for representing complex numbers
struct complex{
    int real; // Real part of the complex number
    int img; // Imaginary part of the complex number
} n1, n2, n3; // Define three complex number variables n1, n2, and n3

// Function to input data for two complex numbers
void data()
{
    int a, b, c;
    printf("Enter the real part of 1st complex number: ");
    scanf("%d", &n1.real);
    printf("Enter the imaginary part of 1st complex number: ");
    scanf("%d", &n1.img);
    printf("Your 1st Complex Number is %d+%di\n", n1.real, n1.img);
    printf("Enter the real part of 2nd complex number: ");
    scanf("%d", &n2.real);
    printf("Enter the imaginary part of 2nd complex number: ");
    scanf("%d", &n2.img);
    printf("Your 2nd Complex Number is %d+%di\n", n2.real, n2.img);
}

// Function to perform addition of two complex numbers
int add()
{
    data(); // Call the data function to input numbers
    n3.real = n1.real + n2.real; // Calculate the real part of the sum
    n3.img = n1.img + n2.img; // Calculate the imaginary part of the sum
    printf("Addition is %d+%di", n3.real, n3.img); // Print the result of addition
}

// Function to display the data of two complex numbers
int display()
{
    data(); // Call the data function to input numbers
    printf("Your 1st Complex Number is %d+%di\n", n1.real, n1.img); // Print the 1st complex number
    printf("Your 2nd Complex Number is %d+%di\n", n2.real, n2.img); // Print the 2nd complex number
}

// Function to perform multiplication of two complex numbers
int multi()
{
    data(); // Call the data function to input numbers
    n3.real = (n1.real * n2.real) - (n1.img * n2.img); // Calculate the real part of the product
    n3.img = (n1.real * n2.img) + (n1.img * n2.real); // Calculate the imaginary part of the product
    printf("Multiplication is %d*%di", n3.real, n3.img); // Print the result of multiplication
    //(a + ib) (c + id) = (ac - bd) + i(ad + bc).
}

// Function to perform subtraction of two complex numbers
int sub()
{
    data(); // Call the data function to input numbers
    n3.real = n1.real - n2.real; // Calculate the real part of the difference
    n3.img = n1.img - n2.img; // Calculate the imaginary part of the difference
    printf("Subtraction is %d-%di", n3.real, n3.img); // Print the result of subtraction
}

// Function to display menu and get user choice
int menu()
{
    int c;
    printf("Your Choices are :\n1.Data\n2.Addition\n3.Multiplication\n4.Subtraction\n5.Display\n");
    scanf("%d", &c);
    return c;
}

// Main function
int main()
{
    int ch;
    ch = menu(); // Call the menu function to display choices and get user input
    switch(ch)
    {
        case 1:
            data(); // Call data function for input
            break;
        case 2:
            add(); // Call add function for addition
            break;
        case 3:
            multi(); // Call multi function for multiplication
            break;
        case 4:
            sub(); // Call sub function for subtraction
            break;
        case 5:
            display(); // Call display function to show data
            break;
        default:
            printf("Enter a Valid Choice:"); // Print message for invalid choice
    }
    return 0;
}
