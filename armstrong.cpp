#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number."<<endl;
    int n,s=0;
    cin>>n;
    int n1=n;
    while(n1>0)
    {
        int r=n1%10;
        s=s+(r*r*r);
        n1/=10;
    }
    if(s==n)
    cout<<"It is an armstrong number.";
    else
    cout<<"It is not an armstrong number.";
    return 0;
}
