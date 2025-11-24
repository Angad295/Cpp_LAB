/*Concepts: Array of objects, operator overloading, aggregation 
Problem: 
Create a Complex class with data members: real and imag. 
• Overload the + and * operators. 
• Create an array of Complex objects. 
• Compute the sum and product of all complex numbers in the array. 
Hint: 
Use loop: 
sum = sum + arr[i]; 
product = product * arr[i];*/
#include <iostream>
#include <vector>
using namespace std;
class Complex {
    double real;
    double imag;    
public:
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag , imag * other.real + real * other.imag);
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of complex numbers: ";
    cin >> n;

    vector<Complex> arr;
    for(int i = 0; i < n; i++) {
        double r, im;
        cout << "Enter real and imaginary parts for complex number " << i+1 << ": ";
        cin >> r >> im;
        arr.push_back(Complex(r, im));
    }

    Complex sum;
    Complex product(1, 1);
    for(const auto& c : arr) {
        sum = sum + c;
        product = product * c;
    }

    cout << "Sum of complex numbers: ";
    sum.display();

    cout << "Product of complex numbers: ";
    product.display();

    return 0;
}