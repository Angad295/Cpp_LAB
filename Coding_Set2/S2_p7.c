/*Input elements of a 2 x 2 x 2 3D array and find the sum of all elements using 
pointer arithmetic.*/

#include<stdio.h>

int sum(int* ptr , int x , int y , int z){
    int sum = 0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                sum += *(ptr + i*y*z + j*z + k);
            }
        }
    }
    return sum ;
}

int main(){
    int num = 1;
    int a=2,b=2,c=2;
    int matrix[a][b][c] ;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<c;k++){
                printf("Enter element number %d : ", num);
                scanf("%d",&matrix[i][j][k]);
                num++;
            }
        }
    }
    int* ptr = &matrix[0][0][0];
    int result = sum(ptr , a , b , c);
    printf("Sum of all elements is : %d",result);

    return 0;
}