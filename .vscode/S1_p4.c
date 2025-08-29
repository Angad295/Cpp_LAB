//Sum of two numbers using pointers//
/*Write a function that takes two integer pointers as parameters and returns their sum. Call 
this function in main. */
#include<stdio.h>

int Sum( int *X , int *Y){
    int z = *X + *Y;
    return z;
}

int main(){
    int a = 7;
    int b = 8;
    int *p;
    int *p2;
    p = &a;
    p2 = &b;
    int c = Sum( p , p2);
    printf("The sum is : %d",c);
}