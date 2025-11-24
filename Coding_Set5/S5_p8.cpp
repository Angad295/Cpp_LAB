/*Concepts: Array of objects, composition, discount logic 
Problem: 
Define a class Product with attributes: id, name, price, discount. 
• Create an array of objects representing cart items. 
• Compute the total amount payable after applying discounts. 
• Display products sorted by final price (after discount). 
Hint: 
Use (price - (price * discount / 100)) for each product. 
Implement a function to compute the total bill.*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Product {
    int id;
    string name;
    double price;
    double discount; // in percentage
public:
    Product() : id(0), name(""), price(0.0), discount(0.0) {}
    Product(int i, string n, double p, double d) : id(i), name(n), price(p), discount(d) {} 
    double finalPrice() const {
        return price - (price * discount / 100);
    }
    void display() const {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Discount: " << discount << "%" << endl;
        cout << "Final Price: " << finalPrice() << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    cin.ignore();

    Product* products = new Product[n];
    for(int i=0; i<n; i++){
        int id;
        string name;
        double price, discount;
        cout << "Enter details for product " << i+1 << ":\n";
        cout << "ID: ";
        cin >> id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, name);
        cout << "Price: ";
        cin >> price;
        cout << "Discount (%): ";
        cin >> discount;
        cin.ignore();
        products[i] = Product(id, name, price, discount);
    }

    double totalAmount = 0.0;
    for(int i=0; i<n; i++){
        totalAmount += products[i].finalPrice();
    }
    cout << "Total amount payable after discounts: " << totalAmount << endl;

    sort(products, products + n, [](const Product &a, const Product &b) {
        return a.finalPrice() < b.finalPrice();
    });

    cout << "Products sorted by final price:\n";
    for(int i=0; i<n; i++){
        products[i].display();
    }

    delete[] products;
    return 0;
}