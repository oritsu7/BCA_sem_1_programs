#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int isPalindrome(const char *str) {
    int left = 0;              
    int right = strlen(str) - 1; 
    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) 
            return 0; 
        left++;  
        right--; 
    }
    return 1; 
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // this is to remove the newline character...
    if (isPalindrome(str))
        printf("The string \"%s\" is a palindrome.\n", str);
    else
        printf("The string \"%s\" is not a palindrome.\n", str);
    return 0;
}
