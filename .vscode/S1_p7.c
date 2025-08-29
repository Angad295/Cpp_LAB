//reverse an Array (Pointer Paramerter)//
/*Write a function void reverse(int *arr, int n) that reverses the elements of an array in place 
using pointers.*/
#include<stdio.h>

void reverse( int *arr , int n){
    int *start = arr , *end =&arr[n - 1];
    int temp ;
    while(start<end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
      
    }

int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr ;
    ptr = arr;
    reverse(ptr,5);
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

