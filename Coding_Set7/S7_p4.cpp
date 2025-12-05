/*Objective: Implement scaleVector<T>(vector<T>& v, T factor) that multiplies every 
element by factor. Read vector, scale, print result. 
Input: type n, then n elements, then factor. 
Output: scaled elements space-separated. 
Example: 
Input: 
int 3 
1 2 3 
2 
Output: 
2 4 6 */

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void scaleVector(vector<T>& v, T factor) {
    for (T& element : v) {
        element *= factor;
    }
}   

int main() {
    cout << "Enter type (int/double) : ";
    string type;
    cin >> type;

    if (type == "int") {
        cout<<"Enter Number of elements: ";
            int n;
            cin >> n;
        vector<int> vec(n);
        cout << "Enter " << n << " integers: ";
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        cout << "Enter scaling factor: ";
        int factor;
        cin >> factor;
        scaleVector(vec, factor);
        cout << "Scaled elements: ";
        for (const int& element : vec) {
            cout << element << " ";
        }
        cout << endl;
    } else if (type == "double") {
        cout<<"Enter Number of elements: ";
            int n;
            cin >> n;
        vector<double> vec(n);
        cout << "Enter " << n << " doubles: ";
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        cout << "Enter scaling factor: ";
        double factor;
        cin >> factor;
        scaleVector(vec, factor);
        cout << "Scaled elements: ";
        for (const double& element : vec) {
            cout << element << " ";
        }
        cout << endl;
    } else {
        cout << "Unsupported type" << endl;
    }

    return 0;
}