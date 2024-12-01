#include <stdio.h>
#include <limits.h> 

long long int fact(int num);

int main() {
    int num;
    printf("Enter a number: ");
    if(scanf("%d", &num) != 1 || num < 0){
        printf("Invalid input.\n");
        return 1;}
    long long int result = fact(num);
    if (result == -1)
        printf("Value exceeds the limit!\n");
    else
        printf("Factorial of %d is: %lld\n", num, result);
    return 0;
}

long long int fact(int num) {
    int i;
    long long int res = 1;

    for (i = 2; i <= num; i++) {
        if (res > (LLONG_MAX / i))
            return -1; // limit
        res *= i;
    }
    return res;
}
