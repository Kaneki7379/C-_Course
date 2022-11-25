#include<iostream>
using namespace std;
  typedef struct employee
{
    int eid;
    int salary;
    char favchar;
}ep;
    union money
    {
        int rice;
        char car;
        int pound;
    };
    int main(){
    ep yash;
    union money m1;
    m1.rice = 23;
    m1.car='c';
    m1.pound=120000000;
    cout<<m1.pound<<endl;
    cout<<m1.rice<<endl;
    return 0;
}