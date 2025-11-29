/*Topic: Multi-level Inheritance 
Problem: 
Create three classes — Person, Employee, and Manager — where Employee inherits from 
Person, and Manager inherits from Employee. 
Each class should add one extra data member and display all details. 
Learning Outcome: Understanding of inheritance hierarchy and passing data through 
constructors.  */

#include<iostream>
using namespace std;

class Person {
    protected:
    string name;
    int age;
    public:
    Person(string n , int a){
        name = n;
        age = a;
    }
};
class Employee: public Person {
    protected:
    int id;
    public:
    Employee(string n , int a , int i): Person(n , a){
        id = i;
    }
};
class Manager: public Employee {
    protected:
    int salary;
    public:
    Manager(string n , int a , int i , int s): Employee(n , a , i){
        salary = s;
    }
    void display(){
        cout<<"Name :"<<name<<"    "<<"Age :"<<age<<"    "<<"ID :"<<id<<"    "<<"Salary :"<<salary<<endl;
    }
};

int main(){
    Manager m1("Angad", 20, 101, 10000);
    m1.display();

    return 0;
}