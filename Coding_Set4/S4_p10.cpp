/*Create a class Employee (id, salary). Add two functions: 
• A member function updateSalary(Employee &e) that copies salary from another 
employee. 
• A non-member function swap(Employee *e1, Employee *e2) that swaps salaries 
of two employees using pointers.*/

#include<iostream>
using namespace std;    

class Employee{
    int id;
    int salary;
    public:
    Employee(){
        id=0;
        salary=0;
    }
    Employee( int i , int s){
        id=i;
        salary=s;
    }
    void updateSalary(Employee &e){
        salary=e.salary;
    }
    void display(){
        cout<<"Employee id : "<<id<<"   "<<"Salary : "<<salary<<endl;
    }
    int getsalary(){ 
        return salary;
     }
     void setsalary(int s){
        salary=s;
     }
};
void swap(Employee *e1, Employee *e2){
    int temp = e1->getsalary();
    e1->setsalary(e2->getsalary());
    e2->setsalary(temp);
}

int main(){
    Employee E1(101 , 1000),E2(102 , 2000);
    
    E1.display();
    E2.display();

     swap(&E1 , &E2);

    E1.display();
    E2.display();

   E1.updateSalary(E2);

    E1.display();
    E2.display();
    
    return 0;
}