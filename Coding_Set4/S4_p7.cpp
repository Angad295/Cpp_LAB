/*Create a class Time (hours, minutes). Add a member function addTime(Time &t) 
that adds t to the calling object (passed by reference).*/
#include<iostream>
using namespace std;
class Time{
    int hours,minutes;
    public:
    Time(){
        hours = 0;
        minutes = 0;
    }
    Time(int h , int m){
        hours = h;
        minutes = m;
    }
    void display(){
        cout<<"Time = "<<hours<<":"<<minutes<<endl;
    }
    void add(Time &t){
    hours+=t.hours;
    minutes+=t.minutes;
    if(minutes>60){
    int carry = minutes/60;
    hours+=carry;
    minutes = (minutes%60);
    }
    }
};

int main(){
    Time t1(1 , 40),t2(2 , 30);
    t1.add(t2);
    t1.display();
     return 0;
}