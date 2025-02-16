#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

char firstNonRepeatingChar(char *str) {
    int freq[MAX_CHAR] = {0};
    
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] == 1) {
            return str[i]; 
        }
    }
    
    return '\0';  
}

int main() {
    char str[] = "geeksforgeeks";
    char result = firstNonRepeatingChar(str);
    
    if (result != '\0') {
        printf("The first non-repeating character is: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
