#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    cout<<"The address of a is "<<b<<endl;//or instead of b use &a//
    cout<<"The value of b is "<<*b<<endl;
    //Pointer to Pointer//
    int** c=&b;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address of b is "<<*c<<endl;
    cout<<"The value at address of (address of b) "<<**c<<endl;
    return 0;
}