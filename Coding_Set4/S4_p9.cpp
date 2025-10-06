/*Define a class Matrix with a 2x2 array. Create a member function add(Matrix 
&m) that returns the sum as a new Matrix object (by value).*/

#include<iostream>
using namespace std;

class Matrix{
    int mat[2][2];
    public:
    Matrix(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                mat[i][j]=0;
            } 
        }
    }
    Matrix( int m[2][2]){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                mat[i][j]=m[i][j];
            } 
        }
    }
    Matrix add(Matrix &m){
        Matrix temp;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                temp.mat[i][j]=mat[i][j]+m.mat[i][j];
            } 
        }
        return temp;
    }
    void display(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<mat[i][j]<<" ";
            } 
            cout<<endl;
        } cout<<endl;
    }
        
};

int main(){
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    Matrix M1(a),M2(b);
    
    M1.display();
    
    M2.display();

    Matrix M3;
    M3=M1.add(M2);

    M3.display();
    
    return 0;
}