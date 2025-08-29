//Increment a variable using Pointer Parameter//
/*Write a function void increment(int *p) that increases the value of an integer by 1. Pass 
the variable’s address to this function and print the updated value.*/
#include<stdio.h>
 void increment(int *p){
    int x = *p;
    x+=1;
    *p = x;
 }
 int main(){
    int a = 5;
    int *ptr;
    ptr = &a;
    increment(ptr);
    printf("Incremented Value = %d",a);
 }
