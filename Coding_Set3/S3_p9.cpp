/*Create a class Time with data members hours and minutes. 
• Write a function addTime(Time t) that adds two time objects and returns a new 
object. 
• Ensure minutes are properly converted into hours if they exceed 60. */

#include<iostream>
using namespace std;

class Time{
    public:
    int hours;
    int minutes;

    Time(){
        hours = 0;
        minutes = 0;
    }
    
    Time(int h , int m){
        hours = h;
        minutes = m;
    }

    Time addTime(Time t){
        Time result;

        result.hours = hours + t.hours ;
        result.minutes = minutes + t.minutes ;
        
        while(result.minutes > 60){
            result.minutes-=60;
            result.hours++;
        }
        return result;
    }

};

int main(){
    Time t1(1 , 30);
    Time t2(1 , 40);

    Time t3 = t1.addTime(t2);

    cout<<"Sum is : "<<t3.hours<<" hours "<<t3.minutes<<" minutes "<<endl;

    return 0;
}