//Write a program to reverse an array of size n using pointers (do not use indexing like arr[i]).//

#include<stdio.h>

void reverse(int* ptr , int n){
  int* last ;
  int* temp = ptr;

  last = ptr + n - 1;
  int ptrVal;
  for(int j=0;j<n/2;j++){
      ptrVal = *ptr;
    *ptr = *last;
    *last = ptrVal;
     ptr++;
     last--;
  }
  for(int k=0;k<n;k++){
    printf("%d\t",*temp);
    temp++;
  }
}


int main(){
    int n = 0;
    int  arr[] = {1,2,3,4,5};
    n = sizeof(arr)/sizeof(arr[0]);
    int* p=arr;
    reverse(p , n);

    return 0;
}
 