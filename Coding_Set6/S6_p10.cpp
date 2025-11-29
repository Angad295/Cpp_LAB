/*Topic: Abstract Classes & Interfaces 
Problem: 
Create an abstract class Shape with pure virtual function area(). 
Derive classes Rectangle, Circle, and Triangle and override the function to calculate their 
areas. 
Store objects in a base class pointer array and display the area of each shape. 
Learning Outcome: Implementation of abstract classes and polymorphism in C++.*/

#include <iostream>
#include <cmath>    
using namespace std;

class Shape {
    public:
    virtual double area() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

class Rectangle : public Shape {
    private:
    double length, width;
    public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
    private:
    double radius;
    public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

class Triangle : public Shape {
    private:
    double base, height;
    public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Rectangle(5.0, 10.0);
    shapes[1] = new Circle(7.0);
    shapes[2] = new Triangle(6.0, 8.0);

    for (int i = 0; i < 3; ++i) {
        cout << "Area of shape " << (i + 1) << ": " << shapes[i]->area() << endl;
        delete shapes[i]; // Clean up
    }

    return 0;
}