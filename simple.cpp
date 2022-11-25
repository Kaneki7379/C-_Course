#include <iostream>
using namespace std;
class simple
{
    int data1, data2, data3;

public:
    simple(int a, int b = 4, int c = 9)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print();
};
void simple::print()
{
    cout << "The value of data1 , data2 and data3 is " << data1 << " , " << data2 << " and " << data3 <<"."<< endl;
}
int main()
{
    simple ob(3, 5);
    ob.print();
    return 0;
}