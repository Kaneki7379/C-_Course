#include <iostream>
using namespace std;
class base1
{
    int a;

public:
    void print();
};
class base2
{
public:
    void print();
};
void base1::print()
{
    cout << "Hello World." << endl;
};
void base2::print()
{
    cout << "Kaisan ba ?" << endl;
}
class derived : public base1, public base2
{
public:
    void print()
    {
        base1::print();
    }
};
int main()
{
    base1 ob;
    ob.print();
    base2 ob1;
    ob1.print();
    derived d;
    d.print();
    return 0;
}