#include<iostream>
using namespace std;
class animals{
    private:
    int l,b,h;
    public:
    char eyecolour,breed;
    void setdata(int l1,int b1,int h1);
    void getdata(){
        cout<<"The length of animal is "<<l<<endl;
        cout<<"The breadth of animal is "<<b<<endl;
        cout<<"The height of animal is "<<h<<endl;
        cout<<"The eyecolour of animal is "<<eyecolour<<endl;
        cout<<"The breed of animal is "<<breed<<endl;
    }
};
void animals::setdata(int l1,int b1,int h1){
    l=l1;
    b=b1;
    h=h1;
}
int main(){
    animals obj;
    obj.eyecolour='b';
    obj.breed='d';
    obj.setdata(23,45,67);
    obj.getdata();
    return 0;
}