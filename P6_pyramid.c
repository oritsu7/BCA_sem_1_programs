#include<stdio.h>

void draw_pyramid(int level, char symbol){
    for (int i = 1; i <= level; i++){
        for (int j = 1; j <= level - i; j++)
            printf(" ");
        for (int k = 1; k <= 2 * i - 1; k++)
            printf("%c", symbol);
        printf("\n");
    }
}

int main(){
    int level;
    char symbol = '^';
    printf("Enter the level of the pyramid: ");
    if(scanf("%d", &level) != 1 || level <= 0){
        printf("Invalid input.");
        return 1;
    }
    draw_pyramid(level, symbol);
}