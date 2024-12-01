#include<stdio.h>

int reverseNum(int num) {
    int reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;                  // aakhri ka number lelo
        reversed = reversed * 10 + remainder; // reverse karke jod dena
        num /= 10;                           // fir last digit hata dena...
    }
    return reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    if(scanf("%d", &num) != 1){
        printf("Invalid input.\n");
        return 1;
    }
    printf("Reversed number: %d\n", reverseNum(num));
    return 0;
}
