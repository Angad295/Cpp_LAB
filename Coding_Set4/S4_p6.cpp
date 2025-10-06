/*Create a class Box (length, width, height). Add a member function compare(Box 
b) that compares the calling object with b (passed by value) and prints which is 
larger in volume*/
#include<iostream>
using namespace std;

class Box{
    int length, width, height;
    public:
    Box(){
        length = 0;
        width = 0;
        height = 0;
    }
    Box(int l, int w, int h){
        length = l;
        width = w;
        height = h;
    }
    int volume(){
        return length * width * height;
    }
    void compare(Box b){
        if(this->volume() > b.volume()){
            cout<<"Calling object is larger in volume"<<endl;
        }else if(this->volume() < b.volume()){
            cout<<"Passed object is larger in volume"<<endl;
        }else{
            cout<<"Both are equal in volume"<<endl;
        }
    }
};

int main(){
    Box b1(2,3,4), b2(3,4,5);
    b1.compare(b2);
    return 0;
}