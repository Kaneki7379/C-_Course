#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"Enter value of ID of employee no. "<<count<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"The value of ID of employee no. "<<count<<" is "<<id<<endl;
    }
    static void getcount(void);
};
int employee::count=1;
void employee::getcount(){
    cout<<"The value of count is "<<count<<endl;
    count++;
}

int main(){
    employee yash,spd,sheru;
    yash.setdata();
    yash.getdata();
    employee::getcount();

    spd.setdata();
    spd.getdata();
    employee::getcount();

    sheru.setdata();
    sheru.getdata();
    employee::getcount();
    return 0;
}