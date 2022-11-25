#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age =";
    cin>>age;
    if(age>18)
    cout<<"You can come to the party.";
    else if(age==18)
    cout<<"You can come to the party with a kid pass.";
    else
    cout<<"You cannot come the party.";
    return 0;
}
