/*Concepts: Array of objects, operator overloading 
Problem: 
Define a class Item with members: code, name, and quantity. 
• Overload the + operator to add quantities of items with the same code. 
• Create an array of items. 
• Merge stock from two inventories (two arrays of objects) into a third array. 
Hint: 
Use operator overloading with an array-based merging logic.*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
    int code;
    string name;
    int quantity;
public:
    Item() : code(0), name(""), quantity(0) {}
    Item(int c, string n, int q) : code(c), name(n), quantity(q) {}

    int getCode() const { return code; }

    Item operator+(const Item &it) const {
        if(code == it.code){
            return Item(code, name + " , " + it.name, quantity + it.quantity);
        }
        return Item();
    }

    void display() const {
        cout << "Item Code: " << code << endl;
        cout << "Item Name: " << name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "---------------------" << endl;
    }
};

int main(){
    int n1, n2;
    cout << "Enter number of items in first inventory: ";
    cin >> n1;
    cin.ignore();

    vector<Item> inv1(n1);
    for(int i=0; i<n1; i++){
        int c, q;
        string n;
        cout << "Enter details for item " << i+1 << ":\n";
        cout << "Item Code: ";
        cin >> c;
        cin.ignore();
        cout << "Item Name: ";
        getline(cin, n);
        cout << "Quantity: ";
        cin >> q;
        cin.ignore();
        inv1[i] = Item(c, n, q);
    }

    cout << "Enter number of items in second inventory: ";
    cin >> n2;
    cin.ignore();

    vector<Item> inv2(n2);
    for(int i=0; i<n2; i++){
        int c, q;
        string n;
        cout << "Enter details for item " << i+1 << ":\n";
        cout << "Item Code: ";
        cin >> c;
        cin.ignore();
        cout << "Item Name: ";
        getline(cin, n);
        cout << "Quantity: ";
        cin >> q;
        cin.ignore();
        inv2[i] = Item(c, n, q);
    }

    vector<Item> merged;
    for(int i=0; i<n1; i++){
        merged.push_back(inv1[i]);
        for(int j=0; j<n2; j++){
            if(inv1[i].getCode() == inv2[j].getCode()){
                merged.back() = merged.back() + inv2[j];
                inv2.erase(inv2.begin() + j);
                n2--;
                j--;
            }
        }   
        inv1.erase(inv1.begin() + i);
        n1--;
        i--;
    }
     for(int i=0; i<n1; i++){
        merged.push_back(inv1[i]);
    }
    for(int j=0; j<n2; j++){
        merged.push_back(inv2[j]);
    }

    cout << "Merged Inventory:\n";
    for(auto &item : merged){
        item.display();
    }
    return 0;
}
