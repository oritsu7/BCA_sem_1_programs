#include<stdio.h>
#include"myHeader.h" // for swap and traverse function
#define Size 10

void bubble_sort(int *arr, int size){
    int i, j;
    for(i=1; i <= size; i++){
        for(j=0; j < size - 1; j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int main(){
    int arr[Size] = {9, 2, 4, 1, 7, 3, 8, 5, 10, 6};
    printf("\nArray before sorting : ");
    traverse(arr, Size);
    bubble_sort(arr, Size);
    printf("\nArray after sorting : ");
    traverse(arr, Size);
}