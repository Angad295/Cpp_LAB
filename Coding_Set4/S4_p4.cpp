/*Write a class Complex (real, imag). Create a non-member function add(Complex 
c1, Complex c2) that returns a new object by value.*/
#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    void display(){
        cout<<real<<" + i"<<imag<<endl;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    
};

Complex add(Complex c1, Complex c2);

int main(){
    Complex c1(2,3), c2(4,5);
    Complex c3 = add(c1, c2);
    c3.display();
    return 0;
}
Complex add(Complex c1, Complex c2){
    Complex temp;
    temp = c1 + c2;
    return temp;
}