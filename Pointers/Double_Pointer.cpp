#include<iostream>
using namespace std;
int main(){

    int i =5;
    int* ptr=&i;
    int** ptr2=&ptr;

    cout<<"Printing ptr"<<ptr<<endl;
    //cout<<"Address of ptr"<<&ptr<<endl;
    cout<<*ptr2<<endl;
    
    //same value
    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;

    //Address of ptr 
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;



}