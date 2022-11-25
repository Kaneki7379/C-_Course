#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float>
float avg(T1 a, T2 b)
{
    float av = (a + b) / 2.0;
    return av;
}

template <class t1>
void swapp(t1 &a, t1 &b)
{ // Call by reference
    t1 temp = a;
    a = b;
    b = temp;
}
int main()
{
    float x = 1.7, y = 9.6;
    swapp(x, y);
    cout << x << endl
         << y << endl;
    float a;
    a = avg(5.9, 7.9);
    printf("The average of two numbers is %.4f\n", a);
    return 0;
}