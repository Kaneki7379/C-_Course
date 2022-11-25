#include<iostream>
using namespace std;
template<class c,class i>
class Base{
    public:
c data1;
i data2;
Base(c a,i b){
    data1=a;
    data2=b;
}
void display()
{
    cout<<this->data1<<endl<<this->data2<<endl;
}
};
int main(){
    Base<int,char> obj(12,'B');
    obj.display();
    
    Base<float,char> obj1(5.2,'O');
    obj1.display();
    return 0;
}