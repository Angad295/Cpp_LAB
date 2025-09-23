/*Write a program to dynamically allocate memory for an integer array of size n, 
input elements, and find their average using pointers.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 0;
    int* arr ;
    float sum = 0;
    printf("Enter the number of elements :");
    scanf("%d",&n);
   //allocating memory for arr//
    arr = (int*) malloc(n * sizeof(int));
    
    for(int i=0;i<n;i++){
        printf("Enter the elements : ");
        scanf("%d",arr + i);
    }    

    for(int i=0;i<n;i++){
        sum += *(arr + i);
    }

    float average = sum/n;
    printf("The average is : %f",average);
   //free up the allocated memory//
    free(arr);

    return 0;

}