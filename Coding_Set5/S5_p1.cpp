/*Concepts: Array of objects, data input/output, aggregation logic 
Problem: 
Create a class Student with members: rollNo, name, marks[5], and total. 
• Use an array of Student objects to store data of n students. 
• Calculate and display the total marks and the student with the highest total. 
Hint: 
Loop through array, call member functions for input and calculation. */
#include<iostream>
using namespace std;

class Student{
    int rollNo;
    string name;
    int marks[5];
    int total;
    public:
    Student(){
    rollNo = 0;
    name = "Undefined";
    for(int i=0;i<5;i++){
         marks[i]=0;
    }
    total=0;
    }
    Student(int r, string n, int* ptr ){
    total=0;
    rollNo=r;
    name=n;
    for(int i=0;i<5;i++){
         marks[i]=ptr[i];
          total+=ptr[i]; 
    }
   
    }
    void display(){
        cout<<"Name :"<<name<<endl;
         cout<<"RollNo :"<<rollNo<<endl;
           for(int i=0;i<5;i++){
         cout<<"Marks in subject "<<i+1<<" : "<<marks[i]<<endl;
    }     
           cout<<"Total :"<<total<<endl;    
    }
    int getTotal(){
        return total;
    }
};

int max( Student* ptr , int n){
      int maxIndex = 0;
      int max = 0;
      for(int i=0;i<n;i++){
         if(max<ptr[i].getTotal()){
            max = ptr[i].getTotal();
            maxIndex = i;
         }
          
    }
   return maxIndex;
    }

int main(){
    int rollNo;
    string name;
    int marks[5];
    int total;
    int n=0;
    cout<<"Enter number of Students :";
    cin>>n;
    
    Student arr[n];

  for(int i=0;i<n;i++){
    cout<<"Name :";cin>>name;
         cout<<"RollNo :";cin>>rollNo;
           for(int i=0;i<5;i++){
         cout<<"Marks in subject "<<i+1<<" : ";cin>>marks[i];
    }    
    int* ptr=marks;
    arr[i]=Student ( rollNo , name , ptr );
  }
  Student* p = arr;
int maxId = max(p , n);

cout<<"Student with highest total marks is :"<<endl;

arr[maxId].display();
   
return 0;

}