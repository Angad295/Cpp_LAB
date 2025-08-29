//String Length using Pointer Traversal //
/*Write a function int strLength(char *s) that calculates the length of a string without using 
strlen. Use pointer movement*/
#include<stdio.h>
#include<string.h>

int steLength(char*s){
char *str = s ;
while( *s  ){
  s++;
}  
  return s - str;
}

int main(){
    char str [] = "Function";
    char *st = str;
   int a = steLength( st );
  printf("Thus String has length of %d ",a);

  return 0;
}