/*Concepts: Dynamic array of objects, object filtering 
Problem: 
Create a class Flight with data members: flightNo, source, destination, seatsAvailable. 
• Allocate flights dynamically (new Flight[n]). 
• Display all flights going to a particular destination entered by user. 
• Update seat count when a booking is made. 
Hint: 
Use functions for searching and seat modification. */
#include <iostream>
#include <string>
using namespace std;

class Flight {
    string flightNo;
    string source;
    string destination;
    int seatsAvailable;
public:
    Flight() : flightNo(""), source(""), destination(""), seatsAvailable(0) {}
    Flight(string fn, string src, string dest, int seats)   
        : flightNo(fn), source(src), destination(dest), seatsAvailable(seats) {}    

    string getDestination() const { return destination; }
    string getFlightNo() const { return flightNo; }
    void bookSeats(int seats) {
        if(seats <= seatsAvailable){
            seatsAvailable -= seats;
            cout << seats << " seats booked successfully on flight " << flightNo << ".\n";
        } else {
            cout << "Booking failed. Only " << seatsAvailable << " seats available on flight " << flightNo << ".\n";
        }
    }
    void display() const {
        cout << "Flight No: " << flightNo << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Seats Available: " << seatsAvailable << endl;
        cout << "-----------------------------" << endl;
    }
};

int main(){
    int n;
    cout << "Enter number of flights: ";
    cin >> n;
    cin.ignore();

    Flight* flights = new Flight[n];
    for(int i=0; i<n; i++){
        string fn, src, dest;
        int seats;
        cout << "Enter details for flight " << i+1 << ":\n";
        cout << "Flight No: ";
        getline(cin, fn);
        cout << "Source: ";
        getline(cin, src);
        cout << "Destination: ";
        getline(cin, dest);
        cout << "Seats Available: ";
        cin >> seats;
        cin.ignore();
        flights[i] = Flight(fn, src, dest, seats);
    }

    string searchDest;
    cout << "Enter destination to search flights: ";
    getline(cin, searchDest);

    cout << "Flights to " << searchDest << ":\n";
    for(int i=0; i<n; i++){
        if(flights[i].getDestination() == searchDest){
            flights[i].display();
        }
    }
    
    string bookFlightNo;
    int seatsToBook;
    cout << "Enter flight number to book seats: ";
    getline(cin, bookFlightNo);
    for(int i=0; i<n; i++){
        if(flights[i].getFlightNo() == bookFlightNo){
            flights[i].display();
            break;
        }
    }   
    cout << "Enter number of seats to book: ";
    cin >> seatsToBook;

    for(int i=0; i<n; i++){
        if(flights[i].getFlightNo() == bookFlightNo){
            flights[i].bookSeats(seatsToBook);
            break;
        }
    }

    delete[] flights;
    return 0;
}