/*Objective: Implement very small stack with capacity cap (cap ≤ 5). Read cap, then m 
commands (push x or pop). On push when full print Full (use exception or if-check). On 
pop when empty print Empty, otherwise print popped value. 
Input example: 
2 4 
push 1 
push 2 
push 3 
pop 
Output: 
Full 
2*/

#include <iostream>
#include <stdexcept>
using namespace std;

class SmallStack {
    int arr[5];
    int top;
    int capacity;
public:
    SmallStack(int cap) : capacity(cap), top(-1) {}
    void push(int x) {
        if (top == capacity - 1) {
            throw overflow_error("Full");
        }
        arr[++top] = x;
    }
    int pop() {
        if (top == -1) {
            throw underflow_error("Empty");
        }
        return arr[top--];
    }
};

int main() {
    int cap, m;
    cout << "Enter capacity and number of commands: ";
    cin >> cap >> m;
    SmallStack stack(cap);
    for (int i = 0; i < m; ++i) {
        string command;
        cout << "Enter command (push or pop): ";
        cin >> command;
        if (command == "push") {
            int x;
            cout << "Enter value to push: ";
            cin >> x;
            try {
                stack.push(x);
            } catch (const overflow_error& e) {
                cout << e.what() << endl;
            }
        } else if (command == "pop") {
            try {
                int value = stack.pop();
                cout << value << endl;
            } catch (const underflow_error& e) {
                cout << e.what() << endl;
            }
        }
    }
    return 0;
}