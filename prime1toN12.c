#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int N;

    
    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Prime numbers from 1 to %d are:\n", N);
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
