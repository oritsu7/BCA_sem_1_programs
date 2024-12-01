#include <stdio.h>
#include <string.h> 

void remove_newline(char *str) {
    str[strcspn(str, "\n")] = '\0'; 
}

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Welcome to the String Utility Tool!\n");
    printf("1. Length of a string\n");
    printf("2. Concatenate two strings\n");
    printf("3. Compare two strings\n");
    printf("4. Find a substring\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    getchar(); // Consume leftover newline

    switch (choice) {
    case 1: 
        printf("Enter a string: ");
        fgets(str1, sizeof(str1), stdin);
        remove_newline(str1);
        printf("Length: %zu\n", strlen(str1));
        break;

    case 2:
        printf("Enter first string: ");
        fgets(str1, sizeof(str1), stdin);
        remove_newline(str1);
        printf("Enter second string: ");
        fgets(str2, sizeof(str2), stdin);
        remove_newline(str2);
        strcat(str1, str2); // Concatenate
        printf("Concatenated string: %s\n", str1);
        break;

    case 3:
        printf("Enter first string: ");
        fgets(str1, sizeof(str1), stdin);
        remove_newline(str1);
        printf("Enter second string: ");
        fgets(str2, sizeof(str2), stdin);
        remove_newline(str2);
        int cmp = strcmp(str1, str2); // Compare strings
        printf("Comparison result: %s\n", cmp == 0 ? "Equal" : (cmp > 0 ? "First is greater" : "First is smaller"));
        break;

    case 4:
        printf("Enter main string: ");
        fgets(str1, sizeof(str1), stdin);
        remove_newline(str1);
        printf("Enter substring: ");
        fgets(str2, sizeof(str2), stdin);
        remove_newline(str2);
        printf("Substring %s found!\n", strstr(str1, str2) ? "is" : "not");
        break;

    default:
        printf("Invalid choice.\n");
        break;
    }
    return 0;
}
