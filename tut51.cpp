#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void setdata(int a, int b);
    void getdata();
};
void complex::setdata(int a, int b)
{
    real = a;
    imaginary = b;
}
void complex::getdata()
{
    cout << "The value of real is : " << real << endl;
    cout << "The value of imaginary is : " << imaginary << endl;
}
int main()
{
    complex *ptr = new complex;
    (*ptr).setdata(41, 72);
    ptr->getdata(); // Using arrow operator.
    return 0;
}