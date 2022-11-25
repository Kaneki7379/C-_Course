#include <iostream>
using namespace std;
class complex
{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2);

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata(o1.a + o2.a, o1.b + o2.b);
    return o3;
}
int main()
{
    complex ob1, ob2, sum;
    ob1.setdata(1, 5);
    ob1.print();

    ob2.setdata(9, 7);
    ob2.print();

    sum = sumcomplex(ob1, ob2);
    sum.print();
    return 0;
}