#include <stdio.h>

int fibo(int level) {
    if (level == 0) 
        return 0;
    int a = 0, b = 1, next;
    for (int i = 2; i <= level; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int num;
    printf("Enter a number : ");
    if(scanf("%d", &num) != 1 || num <= 0){
        printf("Invalid input.\n");
        return 1;
    }
    for (int i = 0; i < num; i++) 
        printf("%d ", fibo(i));
    printf("\n");
    return 0;
}
