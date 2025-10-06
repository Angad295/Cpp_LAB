/*Create a class Rectangle (length, breadth). Write a non-member function 
scale(Rectangle &r) that doubles the dimensions of the rectangle. Pass by 
reference and show that changes affect the original object.*/
#include<iostream>
using namespace std;

class Rectangle{
     public:
    int length,breath;
    Rectangle(){
        length=0;
        breath=0;
    }
    Rectangle(int l, int b){
        length=l;
        breath=b;
    }
};

void scale(Rectangle &r);

int main(){
    Rectangle r1(2,3);
     cout<<"Object"<<"("<<r1.length<<","<<r1.breath<<")"<<endl;
    scale( r1 );
    cout<<"Object"<<"("<<r1.length<<","<<r1.breath<<")"<<endl;

    return 0;
}

void scale(Rectangle &r){
     r.length*=2;
     r.breath*=2;
        cout<<"Copy"<<"("<<r.length<<","<<r.breath<<")"<<endl;
    }

