/*Create a class Circle (radius). Write a non-member function 
increaseRadius(Circle *c) that increases radius by 5 units. Demonstrate passing 
the object by pointer. */
#include<iostream>
using namespace std;

class Circle{
     public:
    int radius;
    Circle(){
        radius=0;
    }
    Circle(int c){
        radius=c;
    }
};

void increaseRadius(Circle *c);

int main(){
    Circle c1(2);
    cout<<"Object"<<"("<<c1.radius<<")"<<endl;
    increaseRadius( &c1 );
    cout<<"Object"<<"("<<c1.radius<<")"<<endl;

    return 0;
}

void increaseRadius(Circle *c){
     c->radius*=2;
     cout<<"Copy"<<"("<< c->radius <<")"<<endl;
    }

