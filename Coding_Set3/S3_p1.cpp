/*Create a class Student with two data members: rollNo and name. Write a program to: 
1. Create an object of the class. 
2. Assign values to its data members. 
3. Display the values.*/

#include<iostream>
using namespace std;

class Student{
    int rollno;
    string name;
    public:

    void get(int r , string n){
        rollno = r;
        name = n;
    }

    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Rollno :"<<rollno<<endl;
    }
};

int main(){
    Student S1;
    S1.get( 12 , "Angad");
    S1.display();

    return 0;
}





