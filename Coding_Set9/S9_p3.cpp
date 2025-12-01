#include <iostream>
#include <vector>
#include <utility>
#include <algorithm> 

using namespace std;

int main() {
    cout << "Enter the number of elements: " << endl;
    int n;
    cin >> n;
    vector<pair<int, int>> vec;

    for (int i = 0; i < n; i++) {
        int temp1, temp2; 
        cout << "Enter the 1st element of " << i << "th pair: " << endl;
        cin >> temp1;
        cout << "Enter the 2nd element of " << i << "th pair: " << endl;
        cin >> temp2; 
        vec.push_back(make_pair(temp1, temp2));
    
    }

    sort(vec.begin(), vec.end());

    cout << "Sorted pairs:" << endl;
    
    for (const auto& element : vec) {
        cout << "(" << element.first << ", " << element.second << ")\t";
    }
    cout << endl;

    return 0;
}
