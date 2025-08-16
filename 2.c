

#include <stdio.h>

void checkDivisibilityBy2(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            printf("Number %d is divisible by 2.\n", arr[i]);
        } else {
            printf("Number %d is not divisible by 2.\n", arr[i]);
        }
    }
}

int main() {
    int arr[] = {10, 23, 45, 66, 78, 91};
   // int size = sizeof(arr) / sizeof(arr[0]);

    checkDivisibilityBy2(arr, 6);

    return 0;
}