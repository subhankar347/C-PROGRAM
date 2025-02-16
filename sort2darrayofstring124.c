#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 30  
#define MAX_STR_COUNT 50 
void sortStrings(char arr[][MAX_STR_LEN], int n) {
    int i, j;
    char temp[MAX_STR_LEN];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n, i;
    char arr[MAX_STR_COUNT][MAX_STR_LEN];


    printf("Enter the number of strings: ");
    scanf("%d", &n);

    
    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }


    sortStrings(arr, n);

    
    printf("\nSorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
