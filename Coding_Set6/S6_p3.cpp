/*Topic: Access specifiers 
Problem: 
Create a class Employee with protected data members id and salary. 
Derive a class Manager that sets and displays these details through a member function. 
Learning Outcome: Usage of protected members and inheritance for controlled data 
access. */

#include<iostream>
using namespace std;

class Employee {
    protected:
    int id , salary;
};

class Manager: public Employee {
    public:
    void set(int i ,int s){
        id = i;
        salary =s;
    }
    void display(){
        cout<<"ID :"<<id<<"    "<<"Salary :"<<salary<<endl;
    }
};


int main(){
    Manager m1;
    m1.set(10 ,10000);
    m1.display();

    return 0;
}