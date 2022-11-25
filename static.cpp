#include<iostream>
using namespace std;

int stat(int a,int b){
    static int c=0;
    c=c+1;
    return a*b+c;
}
int main(){
    int a,b;
cout<<"Enter the value of a and b ="<<endl;
cin>>a>>b;  
cout<<"The product of a*b+c is ="<<stat(a,b)<<endl;
cout<<"The product of a*b+c is ="<<stat(a,b)<<endl;  
cout<<"The product of a*b+c is ="<<stat(a,b)<<endl;
cout<<"The product of a*b+c is ="<<stat(a,b)<<endl;
cout<<"The product of a*b+c is ="<<stat(a,b)<<endl;
    return 0;
}