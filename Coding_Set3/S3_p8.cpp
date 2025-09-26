/*Create a class Complex with two data members real and imag. 
• Define a function add(Complex c) that adds the current object with object c 
and returns the result. 
• In main(), create two complex numbers and add them.*/

#include<iostream>
using namespace std;

class Complex{
    public:

    float real;
    float imag;

    Complex(float r , float i){
        real = r;
        imag = i;
    }

    Complex add(Complex C){
        Complex result(0 , 0);
         result.real = this->real + C.real;
         result.imag = this->imag + C.imag;

        return result;
    }
};

int main(){
    Complex c1(2 , 3);
    Complex c2(4 , 5);

    Complex c3 = c1.add(c2);

    cout<<"Sum is : "<<c3.real<<"+"<<c3.imag<<endl;

    return 0;
}