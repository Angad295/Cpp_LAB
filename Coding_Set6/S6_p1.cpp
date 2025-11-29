/*Topic: Single Inheritance 
Problem: 
Create a class Person with data members name and age. Derive a class Student from 
Person that adds a data member course. 
Write a program to input and display details of a student. 
Learning Outcome: Understanding of single inheritance and protected access specifier.*/

#include <iostream>
#include <string>
using namespace std;


class Person{
    protected:
    string name;
    int age;
};

class Student: public Person{
    string course;
    public:
    void input(string n ,int a ,string c){
        name=n;
        age=a;
        course=c;
    }
    void display(){
        cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"Course : "<<course;
    }
};

int main(){
    Student s;
    string name,course;
    int age;
    cout<<"Enter name, age and course of student: ";
    cin>>name>>age>>course;
    s.input(name,age,course);
    s.display();
    return 0;
}