/*Objective: Write a function template printTwo that prints two values (of the same 
type) separated by a space. 
Input: First token: type (int/double/string), then two values. 
Output: The two values separated by a space. 
Example: 
Input: int 5 7 → Output: 5 7*/

#include<iostream>
#include<string>
using namespace std;

template <typename T>
void printTwo(T a, T b) {
    cout << a << " " << b << endl;
}

int main() {
    cout<<"Enter type (int/double/string) followed by two values: ";
    string type;
    cin >> type;

    if (type == "int") {
        int a, b;
        cin >> a >> b;
        printTwo(a, b);
    } else if (type == "double") {
        double a, b;
        cin >> a >> b;
        printTwo(a, b);
    } else if (type == "string") {
        string a, b;
        cin >> a >> b;
        printTwo(a, b);
    } else {
        cout << "Unsupported type" << endl;
    }

    return 0;
}