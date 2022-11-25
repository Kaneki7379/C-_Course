#include <iostream>
using namespace std;
class complex
{
    int a;

public:
    complex &setdata(int a)
    {
        this->a = a;
        return *this;
    }
    void getdata()
    {
        cout << "The value of a is : " << a << endl;
    }
};
int main()
{
    complex ob;
    ob.setdata(6).getdata();
    return 0;
}