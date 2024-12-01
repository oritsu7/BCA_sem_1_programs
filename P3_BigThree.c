#include<stdio.h>

int maxb_three(int a, int b, int c){
    return  (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}

int main(){
    int x = 5, y = 9, z = 2;
    printf("The max value is %d\n", maxb_three(x, y, z));
}
