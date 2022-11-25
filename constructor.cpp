#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);
    void print()
    {
        cout << "The desired complex number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(void)
{
    a = 10;
    b = 40;
}
int main()
{
    complex ob;
    ob.print();
    return 0;
}