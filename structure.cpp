#include<iostream>
using namespace std;
struct employee
{
    /* data */
    int eid;
    int salary;
    char favchar;
};

int main(){
    struct employee yash;
    yash.eid=345;
    yash.salary=230000000;
    yash.favchar='s';
    cout<<"The Salary of yash is = "<<yash.salary<<endl;
    cout<<"The Employee ID of yash is = "<<yash.eid<<endl;
    cout<<"The Favourite Character of yash is = "<<yash.favchar<<endl;
    return 0;
}