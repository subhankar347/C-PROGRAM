#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int isPangram(char str[]) {
    
    int letters[ALPHABET_SIZE] = {0};


    for (int i = 0; str[i] != '\0'; i++) {

        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
        
            letters[ch - 'a'] = 1;
        }
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (letters[i] == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str[1000];


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (isPangram(str)) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }

    return 0;
}
