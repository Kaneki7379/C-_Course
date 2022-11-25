#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class myclass
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
    myclass(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl
             << this->data3;
    }
};

int main()
{
    myclass<> ob(45, 50.6, 'Y');
    ob.display();
    cout << endl;
    myclass<char, int, float> ob1('h', 546, 0.4);
    ob1.display();
    return 0;
}