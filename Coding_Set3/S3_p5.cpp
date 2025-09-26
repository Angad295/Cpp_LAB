/*Create a class Circle with data member radius. 
• Write a default constructor that sets radius to 1. 
• Write a parameterized constructor that accepts radius from user. 
• Add a function area() to calculate and display the area. 
• Demonstrate both constructors in main(). 
*/

 #include<iostream>
 using namespace std;

 class Circle{
    int radius;

      public:
//Default constructor//
      Circle (){
        radius = 1 ;
      }
//Parameterised constructor//
      Circle (int r){
        radius = r  ;
      }

      void area(){
        int area = 3.14*radius*radius ;
        cout<<"Area is : "<<area<< endl;
      }
 };


 int main(){

    Circle C1;
    C1.area();

    Circle C2(10);
    C2.area();

    return 0;
 }