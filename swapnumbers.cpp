#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int count(int n){
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    return c;
    }
    int main(){
    int n,p=1;
    cout<<"Enter the number you desire = "<<endl;
    cin>>n;
    int c=count(n)-1;
    while(c!=0){
        p=p*10;
        c--;
    }
    int d=n/p;
    int d1=n%10;
    cout<<"The given number is = "<<n<<endl;
    cout<<"The first and last digit is = "<<d<<" and "<<d1<<endl;
    swap(d,d1);
    cout<<"The swapped number is = "<<d<<(n%p)/10<<d1<<endl;
    return 0;
}