/*Write a program with a class Point (x, y). Create a non-member function 
display(Point p) that takes a Point object by value and prints its coordinates. 
Observe how changes inside the function do not affect the original object. */
#include<iostream>
using namespace std;

class Point{
     public:
    int x,y;
    Point(){
        x=0;
        y=0;
    }
    Point(int a, int b){
        x=a;
        y=b;
    }
};

void display(Point p);

int main(){
    Point p1(2,3);
    cout<<"Object"<<"("<<p1.x<<","<<p1.y<<")"<<endl;
    display( p1 );
    cout<<"Object"<<"("<<p1.x<<","<<p1.y<<")"<<endl;

    return 0;
}

void display(Point p){
     p.x++;
     p.y++;
        cout<<"Copy"<<"("<<p.x<<","<<p.y<<")"<<endl;
    }

