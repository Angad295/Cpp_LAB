/*Concepts: Constructor overloading, array of objects, computation logic 
Problem: 
Define a class Employee with data members id, name, basicSalary, hra, da, and netSalary. 
• Overload constructors: one default and one parameterized. 
• Store records of n employees in an array. 
• Calculate and display netSalary = basicSalary + hra + da. 
• Display employee(s) earning above ₹50,000.*/
#include<iostream>
using namespace std;

class Employee{
   int id;
   string name;
   int basicsalary;
   int hra,da;
   double netsalary;
   public:
   Employee(){
      id=0;
      name="Undefined";
      basicsalary=0;
      hra=0;
      da=0;
      netsalary=0.0;
   }
    Employee(int i, string n, int b, int h, int d){
        id=i;
        name=n;
        basicsalary=b;
        hra=h;
        da=d;
        netsalary=basicsalary+hra+da;
    }
    void display(){
        cout<<"Name :"<<name<<endl;
         cout<<"ID :"<<id<<endl;
         cout<<"Basic Salary :"<<basicsalary<<endl;
         cout<<"HRA :"<<hra<<endl;
         cout<<"DA :"<<da<<endl;
         cout<<"Net Salary :"<<netsalary<<endl;    
    }
    double getNetSalary(){
        return netsalary=basicsalary+hra+da;
    }   
};

void above50k(Employee* ptr, int n){
      for(int i=0;i<n;i++){
         if(ptr[i].getNetSalary()>50000){
            ptr[i].display();
            cout<<endl;
         }
          
    }
    
    }

int main(){
    int id;
    string name;
    int basicsalary,hra,da;
    int n;
    cout<<"Enter number of employees :";
    cin>>n;
    Employee* ptr = new Employee[n];
    for(int i=0;i<n;i++){
        cout<<"Enter details of employee "<<i+1<<endl;
        cout<<"Enter ID :";
        cin>>id;
        cout<<"Enter Name :";
        cin>>name;
        cout<<"Enter Basic Salary :";
        cin>>basicsalary;
        cout<<"Enter HRA :";
        cin>>hra;
        cout<<"Enter DA :";
        cin>>da;
        ptr[i] = Employee(id,name,basicsalary,hra,da);
    }
    cout<<endl<<"Employees earning above 50000 are :"<<endl;
    above50k(ptr,n);
    delete[] ptr;
    return 0;
}