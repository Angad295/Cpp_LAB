/*Create a class Report with: 
• Data members: name, rollNo, marks[5]. 
• Member functions: 
o input() → to take details from user. 
o display() → to show details. 
o calculateGrade() → to calculate total, percentage, and grade (A, B, C, 
Fail). 
Write a program to create multiple objects of Report and display the report card for 
each student.*/
#include<iostream>
using namespace std;

class Report{
    string name;
    int rollno;
    int marks[5];
    public:
    void input( string n , int r , int m[5]){
        name = n;
        rollno = r;
        for(int i=0;i<5;i++){
            marks[i] = m[i];
            }
    }

    void display(){
        cout<<"Name :"<<name<<endl<<"Rollno :"<<rollno<<endl;
        for(int i=0;i<5;i++){
            cout<<"Marks of subject "<<i+1<<" : "<<marks[i]<<endl;
        }
    }

    void calculateGrade(){
        int total = 0;
         for(int i=0;i<5;i++){
            total += marks[i];
            }

        double result = total/5 ;

        if(55 <= result <= 100){
            if(result >= 85){
                cout<<"Grade is A "<<endl;
            }
            else{if(result >= 70){
                cout<<"Grade is B "<<endl;
            }
        else { cout<<"Grade is C "<<endl;}
                }
        } 
        else cout<<"FAILED"<<endl;
    }
};


int main(){
    Report S1;
    Report S2;

    int arr[5] = {90,91,92,93,94};
    int _arr[5] = {80,81,82,83,74};

    S1.input("Angad" , 1 , arr );
    S1.display();
    S1.calculateGrade();

    
    S2.input("Rohit" , 2 , _arr );
    S2.display();
    S2.calculateGrade();

    return 0;
}