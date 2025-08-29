//Access array elements using pointers//
/*Write a program to input 5 integers in an array. Use pointer arithmetic (not indices) to 
print all the elements.*/
#include<stdio.h>

int main(){
    int arr [5] ;
  
    for(int i = 0;i<5;i++){
        printf("Enter Index %d intigers : ",i);
    scanf("%d",&arr[i]);
        }
    printf("\n---Printing elements---\n");
      int *ptr ;
    ptr = arr;
    for(int j = 0;j<5;j++){
        printf("Index %d element is : %d\n",j, *ptr);
        ptr++;
        
    }
    return 0;
}