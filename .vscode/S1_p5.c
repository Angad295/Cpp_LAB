//Find maximum of three numbers //
//Write a function int max(int *a, int *b, int *c) that returns the largest of three numbers.//
#include<stdio.h>

int Max( int *p1 , int *p2 , int *p3){
    int x = *p1;
    int y = *p2;
    int z = *p3;
    if(x>y){
        if(x>z){ return x;}
        else{ return z;}
    }
    else{ if(y>z){
        return y;}
        else{ return z;}
        }
}
int main(){
    int a = 8;
    int b = 6;
    int c = 7;
    int *p1,*p2,*p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
   int max = Max( p1 , p2 , p3 );
   printf("The maximum number is %d",max);
}