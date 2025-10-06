/*Define a class Student (name, marks). Write a non-member function 
compare(const Student &s1, const Student &s2) that takes objects by reference 
and returns the one with higher marks by value.*/
#include<iostream>
using namespace std;

class Student{
    string name;
    int marks;
    public:
    Student(){
        name = "";
        marks = 0;
    }
    Student(string n , int m){
        name = n;
        marks = m;
    }
    void display(){
        cout<<name<<" : "<<marks<<endl;
    }
    bool operator<(const Student &s)const{
        if(this->marks<s.marks){
            return true ;
        }else { return false ;}
    }
};

Student compare(const Student &s1 , const Student &s2);

int main(){
    Student s1("Angad", 95), s2("Ronak", 90);
    Student s3 = compare(s1, s2);
    s3.display();
    return 0;
}

Student compare(const Student &s1 , const Student &s2){
     if( s1 < s2 ){
        return s2 ;
     }else{
    return s1 ;}
}