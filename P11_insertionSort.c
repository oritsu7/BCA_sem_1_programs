#include<stdio.h>
#include"myHeader.h"
#define Size 10

void insertion_sort(int *arr, int size){
    int i, j;
    for (i = 1; i < size; i++){
        j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(&arr[j], &arr[j-1]);
            j--;
        }
    }
}

int main(){
    int arr[Size] = {3, 5, 2, 9, 1, 4, 7, 10, 8, 6};
    printf("\nArray before sorting : ");
    traverse(arr, Size);
    insertion_sort(arr, Size);
    printf("\nArray after sorting : ");
    traverse(arr, Size);
}