//Pointer to Array vs Array of Pointers//
#include<stdio.h>
void arrayofpointers(){
    int a=1,b=2,c=3,d=4,e=5;
      //Declearing Array of pointers//
    int *p[5] = {&a,&b,&c,&d,&e};
    printf("Elements are :\n");
    for(int i=0;i<5;i++){
        printf("%d\t",*p[i]);
    }
}

void pointertoarray(){
   int arr[] = {6,7,8,9,0};
   //Declearing Pointer to Array//
   int (*p)[] = &arr;
    printf("\nElements are :\n");
   for(int i=0;i<5;i++){
        printf("%d\t",(*p)[i]);
   }   
    
}
int main(){  
    arrayofpointers();
    pointertoarray();
}