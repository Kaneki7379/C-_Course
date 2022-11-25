#include <iostream>
#include <cmath>
using namespace std;
class Simple_Calculator
{
protected:
    int a1, a2;

public:
    void set_data();
    int add(int a, int b);
    int subtract(int a, int b);
    int product(int a, int b);
    float divide(float a, float b);
};
void Simple_Calculator::set_data()
{
    cout << "Enter two numbers." << endl;
    cin >> a1 >> a2;
}
int Simple_Calculator::add(int a, int b)
{
    return a + b;
}
int Simple_Calculator::subtract(int a, int b)
{
    return a - b;
}
int Simple_Calculator::product(int a, int b)
{
    return a * b;
}
float Simple_Calculator::divide(float a, float b)
{
    return a / b;
}
class Scientific_Calculator : protected Simple_Calculator
{
public:
    float squareroot(int a);
    float cuberoot(int a);
    double power(double a, double b);
    double square(double a);
};
float Scientific_Calculator::squareroot(int a)
{
    return sqrt(a);
}
float Scientific_Calculator::cuberoot(int a)
{
    return cbrt(a);
}
double Scientific_Calculator::power(double a, double b)
{
    return pow(a, b);
}
double Scientific_Calculator::square(double a)
{
    return a*a;
}
class Hybrid_Calculator : protected Scientific_Calculator
{
public:
    void display()
    {
        set_data();
        cout << "The value of value 1 and value 2 is " << a1 << " and " << a2 << endl;
        cout << "By Adding value 1 and value 2 " << add(a1, a2) << endl;
        cout << "By Subtracting value 1 and value 2 " << subtract(a1, a2) << endl;
        cout << "By Multiplying value 1 and value 2 " << product(a1, a2) << endl;
        cout << "By Dividing value 1 and value 2 "  << divide(a1, a2) << endl;
        cout << "By Square root of value 1 " << square(a1) << endl;
        cout << "By Square root of value 2 " << square(a2) << endl;
        cout << "By Cube root of value 1 " << cuberoot(a1) << endl;
        cout << "By Cube root of value 2 " << cuberoot(a2) << endl;
        cout << "By Powring value1 and value 2 " << pow(a1, a2) << endl;
        cout << "By squaring value 1 " << square(a1) << endl;
        cout << "By squaring value 2 " << square(a2) << endl;
    }
};
int main()
{
    Hybrid_Calculator obj;
    obj.display();
    return 0;
}