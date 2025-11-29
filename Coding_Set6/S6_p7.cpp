/*Topic: Combining Features of Multiple Classes 
Problem: 
Create class Teacher with member subject and class Researcher with member 
area_of_research. 
Derive a class TeachingAssistant from both, and display details of a TA. 
Learning Outcome: Handling data and ambiguity in multiple inheritance.*/

#include<iostream>
using namespace std;

class Teacher {
    protected:
    string subject;
    public:
    Teacher(string sub) {
        subject = sub;
    }
};
class Researcher {
    protected:
    string area_of_research;
    public:
    Researcher(string area) {
        area_of_research = area;
    }
};
class TeachingAssistant : public Teacher, public Researcher {
    public:
    TeachingAssistant(string sub, string area) : Teacher(sub), Researcher(area) {}
    void displayDetails() {
        cout << "Subject: " << subject << endl;
        cout << "Area of Research: " << area_of_research << endl;
    }
};

int main() {
    TeachingAssistant ta("Mathematics", "Algebraic Topology");
    ta.displayDetails();

    return 0;
}