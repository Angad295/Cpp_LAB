/*Concepts: Array of objects, sorting based on member variable 
Problem: 
Design a class Cricketer with members: playerName, matches, runs, average. 
• Read data for n players. 
• Calculate average = runs / matches. 
• Sort and display players in descending order of average runs. 
Hint: 
Use a sorting algorithm (like bubble sort) with object swapping. */
#include<iostream>
using namespace std;

class Cricketer{
    string playerName;
    int matches;
    int runs;
    float average;
    public:
    Cricketer(){
        playerName="";
        matches=0;
        runs=0;
        average=0.0;
    }
    Cricketer(string name, int m, int r){
        playerName=name;
        matches=m;
        runs=r;
        average=(float)runs/matches;
    }
    float getAverage(){
        return average;
    }
    void display(){
        cout<<"Player Name: "<<playerName<<endl;
        cout<<"Matches: "<<matches<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<average<<endl;
        cout<<"---------------------"<<endl;
    }
};


int main(){
    int n;
    cout<<"Enter number of players: ";
    cin>>n;
    cin.ignore();
    Cricketer players[n];
    for(int i=0;i<n;i++){
        string name;
        int matches, runs;
        cout<<"Enter details for player "<<i+1<<":"<<endl;
        cout<<"Player Name: ";
        getline(cin, name);
        cout<<"Matches: ";
        cin>>matches;
        cout<<"Runs: ";
        cin>>runs;
        cin.ignore();
        players[i] = Cricketer(name, matches, runs);
    }
    // Sorting players based on average in descending order
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(players[j].getAverage()<players[j+1].getAverage()){
                Cricketer temp = players[j];
                players[j] = players[j+1];
                players[j+1] = temp;
            }
        }
    }
    cout<<"Players sorted by average runs:"<<endl;
    for(int i=0;i<n;i++){
        players[i].display();
    }
    return 0;
}