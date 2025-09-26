/*Create a class Rectangle with data members length and width. 
• Define a member function area() outside the class (using scope resolution 
operator). 
• In main(), create an object and display its area.*/

#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int width;

    public:

    void area( int l , int w);
};

int main(){
    Rectangle R1;

    R1.area(10 , 10);

    return 0;
}
//Using scope resolutin operator//
void Rectangle::area(int l , int w){
    cout<<"Area is : "<<l*w<<endl;
}