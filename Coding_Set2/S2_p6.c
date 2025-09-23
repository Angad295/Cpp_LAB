/*Given a 2D array of integers, write a program to find the maximum element of 
each row using pointers.*/

#include<stdio.h>

void rowmax(int* ptr, int m , int n){
    int max = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max < *(ptr + i*n + j)){
            max = *(ptr + i*n + j) ;
            }
        }
         printf("Maximum of row %d is : %d\n",i+1,max);
    }
  
}

int main(){
    int  m,n;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&m ,&n); 

    int matrix[m][n];

    printf("Enter elements of  matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);


    int* p1 ;
    p1 = &matrix[0][0] ;
    rowmax(p1 , m , n);

    return 0;
}
