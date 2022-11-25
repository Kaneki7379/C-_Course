#include<iostream>
using namespace std;
int main()
{
    int r,s=0,t1=0,t2=1;
    cout<<"Enter the range of fibonacci series = "<<endl;
    cin>>r;
    for(int i=1;i<=r;i++)
        {
            cout<<t1<<" ";
            s=t1+t2;
            t1=t2;
            t2=s;
        }
 return 0;
}