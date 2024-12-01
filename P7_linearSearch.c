#include<stdio.h>

int linear_search(int *arr, int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int main(){
    int target, arr[10] = {1, 8, 9, 5, 4, 6, 2, 7, 3, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Search for a number : ");
    if(scanf("%d", &target) != 1){
        printf("Invalid input\n");
        return 1;
    }
    int result = linear_search(arr, size, target);
    if(result != -1)
    printf("Element is present at index %d\n", result);
}