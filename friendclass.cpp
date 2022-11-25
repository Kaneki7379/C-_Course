#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};
class complex
{
    int a, b;
    friend int calculator::sumrealcomplex(complex, complex);
    friend int calculator::sumcompcomplex(complex, complex);

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    };
    void getvalue()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator::sumcompcomplex(complex c1, complex c2)
{
    return c1.b + c2.b;
}
int main()
{
    complex ob, obj;
    ob.setdata(1, 7);
    obj.setdata(7, 5);
    calculator sum;
    int real = sum.sumrealcomplex(ob, obj);
    int realc = sum.sumcompcomplex(ob, obj);
    cout << "The sum of x-axis is " << real << endl;
    cout << "The sum od y-axis is " << realc << endl;
    return 0;
}