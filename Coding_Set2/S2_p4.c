/*Input two 2D matrices (size m x n) and find their sum. Pass the 2D arrays to a 
function using pointers.*/
#include<stdio.h>

void matrixsum(int* p1 , int* p2 , int m ,int n){
    int result[m][n] ;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result[i][j] = *(p1 + i*n + j) + *(p2 + i*n + j) ;
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",result[i][j]) ;
        }
        printf("\n");
    }
}

int main(){
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int mat1[m][n], mat2[m][n];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat2[i][j]);



    int* p1 ;int* p2 ;
    p1 = &mat1[0][0] ; p2 = &mat2[0][0];
    matrixsum(p1,p2,m,n);

    return 0;
}
