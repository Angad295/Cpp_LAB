// Find Maximum and Minimum //
#include<stdio.h>

int n;
int max;
int min;

void maxandmin(int * ptr){
     max = ptr[0]; 
     min = ptr[0];
    for(int i=0;i<n;i++){
     if(ptr[i]>max)
      max = ptr[i];
    if(ptr[i]<min)
     min = ptr[i];
    }
}
    int main(){
        printf("Enter the number of elements: ");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            printf("Enter the index %d element:",i);
            scanf("%d",&arr[i]);
        }
        int *p ;
        p = arr;
        maxandmin(p);
        printf("Maximum value is: %d\n",max);
         printf("Minimum value is: %d\n",min);
         return 0;
    }
