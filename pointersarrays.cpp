#include<iostream>
using namespace std;

int main(){
    int marks[]={23,45,455,56};
    int* p=marks;
    for(int i=0;i<4;i++)
    cout<<marks[i]<<endl;
    cout<<"The value at *p is "<<*p++<<endl;
    cout<<"The value at *(p+1) is "<<*(p++)<<endl;
    cout<<"The value at *(p+2) is "<<*(p++)<<endl;
    cout<<"The value at *(p+3) is "<<*(p)<<endl;
    return 0;
}