/*Create a class Book with data members title, author, and price. Write a program to 
create three objects of Book, initialize them with user input, and display their details.*/

#include<iostream>
#include<string>
using namespace std;

class Book{
    string title;
    string author;
    int price;

    public:
    
    void input(string t , string a , int p){
        title = t;
        author = a;
        price = p;
    }

    void display(){
        cout<<"Title : "<<title<<endl<<"Author Name : "<<author<<endl<<"Book Price : "<<price<<endl;
    }
};


int main(){
    Book b1;
    Book b2;
    Book b3;

    b1.input("One Piece" , "Oda" , 2000);
    b2.input("Dragon Ball" , "Akira Toriyama" , 10000);

    b1.display();
    b2.display();

    return 0;
}