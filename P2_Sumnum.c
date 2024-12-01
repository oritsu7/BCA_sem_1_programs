#include <stdio.h>
#include <limits.h>


long long int SumNum(int num) {
    long long int sum = num * (num + 1) / 2;
    if (num > LLONG_MAX / 2 || sum > LLONG_MAX)
        return -1;
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    if(scanf("%d", &num) != 1 || num < 0){
        printf("Invalid input.\n");
        return 1;
    }
    long long int result = SumNum(num);
    if (result == -1) 
        printf("Value exceeds the limit!\n");
    else 
        printf("Sum of all numbers from 1 to %d is: %lld\n", num, result);

    return 0;
}
