/*Define a class Account (balance). Add a member function transfer(Account *acc, 
int amount) that transfers money from the calling object to the account pointed 
by acc.*/
#include<iostream>
using namespace std;

class Account{
    int acc;
    int balance;
    public:
    Account(){
        acc=000;
        balance=0;
    }
    Account( int a , int b){
        acc=a;
        balance=b;
    }
    void transfer(Account *a , int amount){
        if(amount<=balance){
      a->balance+=amount;
      balance-=amount;}
      else{cout<<"insuficient amount"<<endl;}
    }
    void display(){
        cout<<"Account number : "<<acc<<endl<<"Balance : "<<balance<<endl;
    }
};

int main(){
    Account A1(101 , 1000),A2(102 , 1000);
    
    A1.display();
    A2.display();

    A1.transfer(&A2 , 1000);

    A1.display();
    A2.display();
    
    return 0;
}