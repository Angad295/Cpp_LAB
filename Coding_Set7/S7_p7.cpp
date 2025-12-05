/*Objective: Read integer x. If x==0 throw the string "Zero" and catch it in main to print 
Caught Zero. Otherwise print OK. 
Input: single integer. 
Output: Caught Zero or OK 
Example: 0 → Caught Zero */
#include <iostream>
#include <string>
using namespace std;

void checkZero(int x) {
    if (x == 0) {
        throw string("Zero");
    }
}

int main() {
    cout << "Enter an integer: ";
    int x;
    cin >> x;

    try {
        checkZero(x);
        cout << "OK" << endl;
    } catch (const string& e) {
        cout << "Caught " << e << endl;
    }

    return 0;
}