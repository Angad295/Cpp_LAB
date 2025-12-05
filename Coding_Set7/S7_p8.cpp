/*Objective: Read one integer as string. If it is negative (starts with -), throw 
std::invalid_argument and catch to print Negative not allowed. Otherwise print the 
number. (You may use stoi inside try-catch.)Input: a string representing an integer. 
Output: number or Negative not allowed 
Example: -5 → Negative not allowed */
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    cout << "Enter an integer as string: ";
    string input;
    cin >> input;

    try {
        int number = stoi(input);
        if (number < 0) {
            throw invalid_argument("Negative not allowed");
        }
        cout << "You entered: " << number << endl;
    } catch (const invalid_argument& e) {
        cout << "Negative not allowed" << endl;
    } catch (const out_of_range& e) {
        cout << "Number out of range" << endl;
    }

    return 0;
}