#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"The point is "<<x<<", "<<y<<endl;
    }
};
int main(){
    //Implicit invoking
    point a(9,2);
    a.display();
    //Explicit Invoking
    point b= point(1,5);
    b.display();
    return 0;
}