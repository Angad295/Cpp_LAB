/*Concepts: Array of objects, aggregation, string matching 
Problem: 
Make a class Car with data members: model, company, price.
• Store n car objects. 
• Display all cars of a particular company. 
• Find and display the most expensive car in the array. 
Extension: 
Allow case-insensitive search using transform().*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Car {
    string model;
    string company;
    double price;
public:
    Car() : model(""), company(""), price(0.0) {}
    Car(string m, string c, double p) : model(m), company(c), price(p) {}

    string getCompany() const { return company; }
    double getPrice() const { return price; }
    void display() const {
        cout << "Model: " << model << endl;
        cout << "Company: " << company << endl;
        cout << "Price: " << price << endl;
        cout << "-----------------------------" << endl;
    }
};

int main(){
    int n;
    cout << "Enter number of cars: ";
    cin >> n;
    cin.ignore();

    Car* cars = new Car[n];
    for(int i=0; i<n; i++){
        string m, c;
        double p;
        cout << "Enter details for car " << i+1 << ":\n";
        cout << "Model: ";
        getline(cin, m);
        cout << "Company: ";
        getline(cin, c);
        cout << "Price: ";
        cin >> p;
        cin.ignore();
        cars[i] = Car(m, c, p);
    }

    string searchCompany;
    cout << "Enter company to search cars: ";
    getline(cin, searchCompany);

    cout << "Cars from company " << searchCompany << ":\n";
    for(int i=0; i<n; i++){
        if(cars[i].getCompany() == searchCompany){
            cars[i].display();
        }
    }

    double maxPrice = 0.0;
    int maxIndex = -1;
    for(int i=0; i<n; i++){
        if(cars[i].getPrice() > maxPrice){
            maxPrice = cars[i].getPrice();
            maxIndex = i;
        }
    }

    if(maxIndex != -1){
        cout << "Most expensive car:\n";
        cars[maxIndex].display();
    }

    delete[] cars;
    return 0;
}