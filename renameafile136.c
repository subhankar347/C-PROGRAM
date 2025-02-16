#include <stdio.h>

int main() {
    char old_name[100], new_name[100];
    
    printf("Enter the current file name: ");
    scanf("%s", old_name);
    

    printf("Enter the new file name: ");
    scanf("%s", new_name);
    
    if (rename(old_name, new_name) == 0) {
        printf("File renamed successfully.\n");
    } else {
        perror("Error renaming file");
    }

    return 0;
}
