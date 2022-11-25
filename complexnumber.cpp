#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int v1,int v2){
      a=v1;
      b=v2;
    }
    void sumofaxis(complex ob1,complex ob2){
      a=ob1.a+ob2.a;
      b=ob1.b+ob2.b;
    }
    void getvalue(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex obj,ui,sum;
    obj.setdata(1,3);
    obj.getvalue();
    ui.setdata(4,8);
    ui.getvalue();
    sum.sumofaxis(obj,ui);
    sum.getvalue();
    return 0;
}