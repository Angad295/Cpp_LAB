//To Print Addres and Value of an variable//
/*Write a program to declare an integer variable. Use a pointer to print the address and 
value of that variable.*/
#include<stdio.h>
 int main(){
    int a = 5;
    // Declearing the pointer //
    int *ptr;
    ptr = &a;
    printf("Value of varabile is: %d\n",*ptr);
    printf("Address of variable is: %d\n",ptr);
 }