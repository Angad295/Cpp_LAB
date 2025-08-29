//Array of Pointers to String//
//Declare an array of pointers to char, store 5 names, and print them one by one.//
#include<stdio.h>
int main(){
  //Declearing array of pointeres//
    char *names[5] = {"Goku","Vegeta","Broly","Gohan","Trunks"};
   
    for(int i = 0;i<5;i++){
        printf("name No. %d is %s\n",i+1,names[i]);
    }
    return 0;
}