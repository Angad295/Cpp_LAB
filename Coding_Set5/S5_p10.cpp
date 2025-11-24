/*Concepts: Array of objects, sorting, encapsulation, file handling (optional) 
Problem: 
Design a class Student with members: 
rollNo, name, marks[3], total, and grade. 
• Calculate total and grade (A for ≥90, B for 80–89, etc.). 
• Sort the array by total marks (descending order). 
• Display the rank list (1st, 2nd, 3rd...). 
• (Optional) Write the rank list to a text file. 
Hint: 
Use encapsulation (private members, public access functions). 
Use a sorting algorithm and maintain ranks dynamically.*/
#include <iostream>
#include <string>   
#include <vector>
#include <algorithm>
#include <fstream>  
using namespace std;
class Student {
    int rollNo;
    string name;
    int marks[3];
    int total;
    char grade;
    
    void calculateTotalAndGrade() {
        total = marks[0] + marks[1] + marks[2];
        double avg = total / 3.0;
        if(avg >= 90) grade = 'A';
        else if(avg >= 80) grade = 'B';
        else if(avg >= 70) grade = 'C';
        else if(avg >= 60) grade = 'D';
        else grade = 'F';
    }
public:
    Student() : rollNo(0), name(""), total(0), grade('F') {
        marks[0] = marks[1] = marks[2] = 0;
    }
    Student(int r, string n, int m1, int m2, int m3) 
        : rollNo(r), name(n) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        calculateTotalAndGrade();
    }
    int getTotal() const { return total; }
    void display(int rank) const {
        cout << "Rank: " << rank << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Total: " << total << endl;
        cout << "Grade: " << grade << endl;
        cout << "-----------------------------" << endl;
    }
    string getDisplayString(int rank) const {
        return "Rank: " + to_string(rank) + "\nRoll No: " + to_string(rollNo) + 
               "\nName: " + name + "\nMarks: " + to_string(marks[0]) + ", " + 
               to_string(marks[1]) + ", " + to_string(marks[2]) + 
               "\nTotal: " + to_string(total) + "\nGrade: " + grade + 
               "\n-----------------------------\n";
    }
};

int main(){
    vector<Student> students;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for(int i = 0; i < n;i++) {
        int rollNo, m1, m2, m3;
        string name;
        cout << "Enter details for student " << (i + 1) << " (Roll No, Name, Marks1, Marks2, Marks3): ";
        cin >> rollNo >> name >> m1 >> m2 >> m3;
        students.emplace_back(rollNo, name, m1, m2, m3);
    }
    
    // Sort students by total marks in descending order
    sort(students.begin(), students.end(), [](const Student &a, const Student &b) {
        return a.getTotal() > b.getTotal();
    });
    
    cout << "\nRank List:\n";
    for(int i = 0; i < n; i++) {
        students[i].display(i + 1);
    }
    
    // Optional: Write to file
    ofstream outFile("rank_list.txt");
    if(outFile.is_open()) {
        for(int i = 0; i < n; i++) {
            outFile << students[i].getDisplayString(i + 1);
        }
        outFile.close();
        cout << "Rank list written to rank_list.txt\n";
    } else {
        cout << "Unable to open file for writing.\n";
    }
    
    return 0;
}