/*Given an array of integers, write a program to find the sum of even elements and 
odd elements separately using pointer arithmetic.*/

#include<stdio.h>

void evenodd(int* ptr , int n){
    int oddsum = 0;
    int evensum = 0;
    for(int i=0;i<n;i++){
        if(*ptr%2==0)
          evensum+=*ptr;
        if(*ptr%2!=0)
          oddsum+=*ptr;

          ptr++;
    }
    printf("Sum of odd nums is :%d\n",oddsum);
    printf("Sum of even nums is :%d\n",evensum);
}

int main(){
    int n = 0;
    int  arr[] = {1,2,3,4,5};
    n = sizeof(arr)/sizeof(arr[0]);
    int* p=arr;
    evenodd(p , n);

    return 0;
}
 
