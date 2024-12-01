#include<stdio.h>
#include<stdbool.h>

bool is_leapyear(int year){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return true;
    return false;
}

int main(){
    int year;
    printf("Enter the year : ");
    if(scanf("%d", &year) != 1 || year < 0){
        printf("Invalid input");
        return 1;
    }
    if(is_leapyear(year))
    printf("%d is a leap year\n", year);
    else
    printf("%d is not a leap year\n", year);

}



