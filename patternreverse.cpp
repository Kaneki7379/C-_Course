#include<iostream>
using namespace std;
int main()
{
    int c=5;
    for(int i=1;i<=5;i++)
    {
        for(int k=c;k>0;k--)
        {
          cout<<" ";
        }
          for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        c--;
        cout<<endl;
        }
      return 0;
    }
  
