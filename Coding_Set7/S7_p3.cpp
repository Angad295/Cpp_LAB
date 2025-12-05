/*Objective: Create a class template MinMax<T> that stores two values (minVal, maxVal) 
and has a constructor taking two T values and a print() method to print them as min 
max. 
Input: type and two values. 
Output: min max (use the given values as they are — no need to compute min/max). 
Example: 
Input: double 2.5 7.1 → Output: 2.5 7.1*/

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class MinMax {
        T minVal;
        T maxVal;
    public:
        MinMax(T minV, T maxV) : minVal(minV), maxVal(maxV) {}
        void print() {
            cout << "Min : " << minVal << "\n" << "Max : " << maxVal << endl;
        }
};

int main() {
    cout << "Enter type (int/double/string) : ";
    string type;
    cin >> type;

    if (type == "int") {
        cout<<"Enter two integers: ";
        int a, b;
        cin >> a >> b;
        MinMax<int> mm(a, b);
        mm.print();
    } else if (type == "double") {
        cout<<"Enter two doubles: ";
        double a, b;
        cin >> a >> b;
        MinMax<double> mm(a, b);
        mm.print();
    } else if (type == "string") {
        cout<<"Enter two strings: ";
        string a, b;
        cin >> a >> b;
        MinMax<string> mm(a, b);
        mm.print();
    } else {
        cout << "Unsupported type" << endl;
    }

    return 0;
}