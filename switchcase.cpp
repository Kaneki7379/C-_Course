#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age="<<endl;
    cin>>age;
    switch(age)
    {
        case 1:
        cout<<"You are 1 years old."<<endl;
        break;
        case 18:
        cout<<"You are 18 years old."<<endl;
        break;
        default:
        cout<<"No special cases.";
    }
    return 0;
}

    

