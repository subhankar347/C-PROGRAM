// C program to multiply two floating point numbers 
#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input two floating point numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Multiply the numbers
    result = num1 * num2;

    // Output the result
    printf("The result of multiplication is: %.2f\n", result);

    return 0;
}

