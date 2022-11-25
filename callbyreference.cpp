#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
int temp =a;
a=b;
b=temp;
}
int main(){
int x=4,y=5;
cout<<"The value of x and y after swapping is "<<x<<" and "<<y<<endl;
swap(x,y);  
cout<<"The value of x and y after swapping is "<<x<<" and "<<y;  
return 0;
}
