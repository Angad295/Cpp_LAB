/*Create an array of string pointers (e.g., names of 5 students) and print them using 
pointer notation*/

#include<stdio.h>

int main(){
    char* arr[] = {"Rohit","Pranav","Bhomika","Saksham","Angad"};
     char** ptr = arr;

     for(int i=0;i<5;i++){
        printf("The names are :");
        printf("%s\n",*ptr);
        ptr++;
     }
     return 0;
}