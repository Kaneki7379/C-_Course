#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        cout << "Constructor for Base1 called." << endl;
        data1 = i;
    }
    void printdata1()
    {
        cout << "The value of data1 : " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        cout << "Constructor for Base2 called." << endl;
        data2 = i;
    }
    void printdata2()
    {
        cout << "The value of data2 : " << data2 << endl;
    }
};
class Derived : public Base2, public Base1
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b),derived1(c),derived2(d)
    {
        cout << "Derived class constructor called." << endl;
    }
    void printinformation()
    {
        printdata1();
        printdata2();
        cout << "The value of derived1 is : " << derived1 << endl;
        cout << "The value of derived2 is : " << derived2 << endl;
    }
};
int main()
{
    Derived ob(1, 2, 3, 4);
    ob.printinformation();
    return 0;
}