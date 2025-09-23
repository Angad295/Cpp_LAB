/*Write a program to input and print elements of a 3 x 3 x 3 cube using only pointers 
(no arr[i][j][k] syntax).*/

#include<stdio.h>

int main(){
    int arr[3][3][3] ;
    int* ptr = &arr[0][0][0];

    for(int i=0;i<9;i++){
        printf("Enter elements for a 3 x 3 x 3 cube :");
        scanf("%d",ptr);
       ptr++; 
    }
    ptr = &arr[0][0][0];
    for(int i=0;i<9;i++){
        printf("The element number %d is : %d\n",i+1,*ptr);
       ptr++; 
    }
    return 0;
}