/*Write a program to find the transpose of a given n x n matrix using pointer 
notation.*/

#include<stdio.h>

void transpose(int* ptr, int n){
    int result[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            result[j][i] = *(ptr + i*n + j) ;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",result[i][j]) ;
        }
        printf("\n");
    }
}

int main(){
    int  n;
    printf("Enter the order of matrix : ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of  matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);


    int* p1 ;
    p1 = &mat[0][0] ;
    transpose(p1 , n);

    return 0;
}
