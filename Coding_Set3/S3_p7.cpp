/*Create a class Car with data members brand and price. 
• Define a copy constructor to initialize one object from another. 
• Demonstrate copy constructor in main().*/

#include<iostream>
#include<string>
using namespace std;

class Car{
    string brand;
    int price;
    public:
//Parameterised constructor//
    Car(string b , int p){
        brand = b;
        price = p;
    }
//Copy constructor//
    Car(const Car &c){
        brand = c.brand;
        price = c.price;
    }

    void display(){
        cout<<"Brand is : "<<brand<<endl<<"Price : "<<price<<endl;
    }
};

int main(){
    Car C1("TATA" , 1000000);
    Car C2 = C1;

    C1.display();
    C2.display();

    return 0;
}