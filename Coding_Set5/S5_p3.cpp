/*Concepts: Array of objects, searching, string handling 
Problem: 
Create a class Book with members: bookID, title, author, and price. 
• Read details for n books into an array. 
• Implement a function to search for a book by author name. 
• Display all books written by that author. 
Extension: 
Allow partial match search using string::find(). */
#include<iostream>
using namespace std;

class Book{
        int bookid;
        string title;
        string author;
        int price;
        public:
        Book(){
            bookid=0;
            title="";
            author="";
            price=0;
        }
        Book(int bid, string t, string a, int p){
            bookid=bid;
            title=t;
            author=a;
            price=p;
        }
        void display(){
            cout<<"Book ID: "<<bookid<<endl;
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"---------------------"<<endl;
        }
        string getAuthor(){
            return author;
        }
};

int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    cin.ignore();
    Book books[n];
    for(int i=0;i<n;i++){
        int bid, price;
        string title, author;
        cout<<"Enter details for book "<<i+1<<":"<<endl;
        cout<<"Book ID: ";
        cin>>bid;
        cin.ignore();
        cout<<"Title: ";
        getline(cin, title);
        cout<<"Author: ";
        getline(cin, author);
        cout<<"Price: ";
        cin>>price;
        cin.ignore();
        books[i] = Book(bid, title, author, price);
    }
    bool check;
    cout<<"Want to search for a Book by author name ?(1/0)"<<endl;
    cin>>check;
    cin.ignore();
    if(check==true){
        string temp;
        cout<<"Enter Author's name : "<<endl;;
        getline(cin, temp);
        for(int i=0;i<n;i++){
            if(temp==books[i].getAuthor()){
                books[i].display();
            }
        }
    }
    return 0;
}