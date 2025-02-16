#include <stdio.h>

int main() {
    
    printf("Uppercase Alphabets (A-Z):\n");
    for (int i = 65; i <= 90; i++) {
        printf("%c ", i);
    }
    printf("\n");

    
    printf("Lowercase Alphabets (a-z):\n");
    for (int i = 97; i <= 122; i++) {
        printf("%c ", i);
    }
    printf("\n");

    return 0;
}
