#include<stdio.h>

int binary_search(const int *arr, int size, int target){
    int low = 0, high = size-1;

    while(low <= high){
        int mid = low + (high - low) / 2; 
        if(arr[mid] == target)
        return mid;
        else if(arr[mid] < target)
        low = mid + 1;
        else
        high = mid - 1;
    }
    return -1;
}

int main(){
    int sorted_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target, size = sizeof(sorted_arr) / sizeof(sorted_arr[0]);
    printf("\nEnter the target : ");
    if(scanf("%d", &target) != 1){
        printf("\nInvalid input.\n");
        return 1;
    }
    int result = binary_search(sorted_arr, size, target);
    if(result == -1)
    printf("\nTarget not found in the array.");
    else
    printf("\nTarget found at index %d.", result);
}