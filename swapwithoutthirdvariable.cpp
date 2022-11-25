#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the two numbers to be swapped "<<endl;
    cin>>a>>b;
    cout<<"The two numbers are = "<<a<<" and "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping "<<a<<" and "<<b;
    return 0;
}