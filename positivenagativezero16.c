// C Program to check if a number is positive, negative, or zero using simple conditional checks
#include <stdio.h>

void checkNum(int N) {
  
    
    if (N == 0) {
        printf("Zeri\n");
    }

    else if (N < 0) {
        printf("Negative\n");
    }

    else {
        printf("Positive\n");
    }
}

int main() {
    int N = 10;
    checkNum(N);
    return 0;
}
