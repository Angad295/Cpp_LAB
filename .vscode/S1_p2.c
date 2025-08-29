//Swap Two Numbers (Call by value vs Call by reference)

#include<stdio.h>
//Call By Value//
void callbyval( int a , int b ){
    int c = a;
    a = b;
    b = c;
     printf("A=%d and B=%d ,Thus swaped\n",a,b); 
}
//Call By Reference//
void callbyref( int *x ,int *y){
    int z = *x;
    *x = *y;
    *y = z;
}
int main(){
    int a = 5;
    int b = 6;
    int *ptr;
    int *ptr2;
    ptr = &a;
    ptr2 = &b;
    callbyval( a , b );
    callbyref( ptr , ptr2 );
    printf("A=%d and B=%d ,Thus swaped\n",a,b);
}