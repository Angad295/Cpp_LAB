#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the number of elements :"<<endl;
    int n ,temp;
    cin>>n;
    vector<int> vec;

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th element :"<<endl;
        cin>>temp;
        vec.push_back(temp);
    }
    cout<<"Enter an integer to remove occurances :";
    cin>>temp;
    
    int j=0;

    for(int i :  vec){
        if(i==temp){
            vec.erase(vec.begin()+j);
            j++;
        }j++;
    }
    for(int i : vec){
        cout<<i<<"\t";
    }

    return 0;
}
