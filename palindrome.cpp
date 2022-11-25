#include<iostream>
using namespace std;
int main()
{
    int n,s=0,t,r;
    cout<<"Enter a number = "<<endl;
    cin>>n;
    if(n>9)
    {
    t=n;
    while(t>0)
    {
        r=t%10;
        s=(s*10)+r;
        t/=10;
     }
        if(s==n)
        cout<<"It is a Palindrome number."<<endl;
    }
        else
        cout<<"It is not a palindrome number."<<endl;
        return 0;
}