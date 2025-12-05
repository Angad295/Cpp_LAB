/*Objective: Implement Box<T> but test with T = string. Class stores a value, set and 
get. Read one string, store it, then print from get(). 
Input: one word (no spaces). 
Output: the same word. 
Example: 
Input: Hello → Output: Hello */

#include <iostream>
#include <string>
using namespace std;

template <typename T>

class Box {
    T value;
    public:
        void set(T val) {
            value = val;
        }
        T get() {
            return value;
        }
};

int main() {
    Box<string> stringBox;
    cout << "Enter a word: ";
    string input;
    cin >> input;
    stringBox.set(input);
    cout << "You entered: " << stringBox.get() << endl;
    return 0;
}