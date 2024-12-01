#include <stdio.h>

int fibo(int level) {
    if (level == 0 || level == 1) {
        return level;
    }
    return fibo(level - 1) + fibo(level - 2);
}

int main() {
    int num;
    printf("Enter a number : ");
    if(scanf("%d", &num) != 1 || num <= 0){
        printf("Invalid input.\n");
        return 1;
    }
    for (int i = 0; i < num; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
