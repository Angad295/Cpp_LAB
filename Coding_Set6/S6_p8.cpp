/*Topic: Virtual Base Classes 
Problem: 
Create a class Person, derive Teacher and Student from it, and then derive a class TA from 
both Teacher and Student. 
Demonstrate the diamond problem and resolve it using virtual inheritance. 
Learning Outcome: Understanding the diamond problem and how virtual inheritance 
eliminates duplication of base class members.*/

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

class Teacher : virtual public Person {
    protected:
    string subject;
    public:
    Teacher(string n , int a , string sub) : Person(n , a){
        subject = sub;
    }
};

class Student : virtual public Person {
    protected:
    string course;
    public:
    Student(string n , int a , string c) : Person(n , a){
        course = c;
    }
};

class TA : public Teacher, public Student {
    public:
    TA(string n ,int a , string sub , string c) : Person(n , a), Teacher(n , a , sub), Student(n , a , c) {}
    
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Course: " << course << endl;
    }
};


int main() {
    
    TA ta("Alice", 25, "Mathematics", "Algebra");
    ta.displayDetails();

    return 0;
}

