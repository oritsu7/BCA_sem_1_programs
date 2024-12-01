#include<stdio.h>

int main(){
    int a, b, res;
    char op;
    printf("\nEnter the first number : ");
    if(scanf("%d", &a) != 1){
        printf("Invalid input.");
        return 1;
    }
    printf("\nEnter the second number : ");
    if(scanf("%d", &b) != 1){
        printf("Invalid input.");
        return 1;
    }
    printf("\nChoose an operator : ");
    if(scanf(" %c", &op) != 1){
        printf("Invalid input.");
        return 1;
    }

    switch (op){
    case '+': res = a + b; break;
    case '-': res = a - b; break;
    case 'x': res = a * b; break;
    case '/':
        if(b == 0){
            printf("Zero division error");
            return 1;  
        }
        res = a / b; break;
    default:
        printf("Please select a valid operator (+ - x /)");
        return 1;  
    }
    printf("\nResult : %d\n", res);
    return 0;
}
