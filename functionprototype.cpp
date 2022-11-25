#include<iostream>
    using namespace std;
    void g();
    int sum(int,int);
    int main(){
    int num1,num2;
    cout<<"Enter the first number = "<<endl;
    cin>>num1;
    cout<<"Enter the second number = "<<endl;
    cin>>num2;
    cout<<"The sum of the two numbers is = "<<sum(num1,num2)<<endl;
    g();
     return 0;
}
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
void g()
{
cout<<"Good Morning"<<endl;
}
