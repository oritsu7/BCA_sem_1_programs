#include<stdio.h>

int main(){
    int digit, sum = 0;
    printf("Enter a digit: ");
    if(scanf("%d", &digit) != 1 || digit <= 0){
        printf("Invalid input.\n");
        return 1;
    }
    while(digit != 0){
        sum += digit % 10;
        digit /= 10;
    }
    printf("Sum of digits: %d\n", sum);
}