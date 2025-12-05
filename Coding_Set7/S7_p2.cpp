/*Objective: Implement sumArray as a function template that returns sum of n elements 
of a vector. Types allowed: int or double. 
Input: First line: type and n. Second line: n numbers. 
Output: Sum (same type as input). 
Example: 
Input: 
int 3 
1 2 3 
Output: 
6 */

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T sumArray(const vector<T>& vec) {
    T sum = 0;
    for (const T& num : vec) {
        sum += num;
    }
    return sum;
}

int main() {
    cout << "Enter type (int/double) : ";
    string type;
    cin >> type;
    cout<<"Enter Number of elements: ";
    int n;
    cin >> n;

    if (type == "int") {
        vector<int> vec(n);
        cout << "Enter " << n << " integers: ";
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }
        cout << "Sum: " << sumArray(vec) << endl;
    } else if (type == "double") {
        vector<double> vec(n);
        cout << "Enter " << n << " doubles: ";
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }
        cout << "Sum: " << sumArray(vec) << endl;
    } else {
        cout << "Unsupported type" << endl;
    }

    return 0;
}