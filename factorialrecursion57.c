// C program to find factorial of given number using recursion
#include <stdio.h>

unsigned int factorial(unsigned int n) {
  
    
    if (n == 1) {
        return 1;
    }


    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
