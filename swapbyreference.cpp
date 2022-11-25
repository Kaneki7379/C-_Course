#include <iostream>
using namespace std;
class c2;
class c1
{
    int a;
    friend void exchange(c1 &x, c2 &y);

public:
    void setdata(int val1)
    {
        a = val1;
    }
    void display(void)
    {
        cout << a << endl;
    }
};
class c2
{
    int b;
    friend void exchange(c1 &x, c2 &y);

public:
    void setdata(int val2)
    {
        b = val2;
    }
    void display(void)
    {
        cout << b << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}
int main()
{
    c1 x;
    x.setdata(2);
    c2 y;
    y.setdata(6);
    exchange(x, y);
    cout << "The value of c1 after exchange becomes = ";
    x.display();
    cout << "The value of c2 after exchange becomes = ";
    y.display();
    return 0;
}