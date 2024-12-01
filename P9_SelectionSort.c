#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int *arr, int size){
    int i, j, iMin;
    for(int i = 0; i < size-1; i++){
        iMin = i;
        for(j = i+1; j < size; j++){
            if(arr[j] < arr[iMin])
            iMin = j;
        }
        if(iMin != i){
            swap(&arr[i], &arr[iMin]);
        }
    }
}

void traverse(int *arr, int size){
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main(){
    int arr[10] = {8, 5, 2, 7, 1, 6, 3, 9, 4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nArray before sorting : ");
    traverse(arr, n);
    selection_sort(arr, n);
    printf("\nArray after sorting : ");
    traverse(arr, n);
}