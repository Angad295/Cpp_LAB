/*Topic: Multiple Derived Classes from One Base 
Problem: 
Create a base class Shape with a function area(). 
Derive two classes: Rectangle and Circle. Override the area() function to compute 
respective areas. 
Learning Outcome: Function overriding in hierarchical inheritance. */

#include<iostream>
using namespace std;

class Shape {
    public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};
class Rectangle : public Shape {
    private:
    int length, width;
    public:
    Rectangle(int l, int w) : length(l), width(w) {}
    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

class Circle : public Shape {
    private:
    int radius;
    public:
    Circle(int r) : radius(r) {}
    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};
int main() {
    Shape* shape1 = new Rectangle(5, 10);
    Shape* shape2 = new Circle(7);

    shape1->area();
    shape2->area();

    delete shape1;
    delete shape2;

    return 0;
}