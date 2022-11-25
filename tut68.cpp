#include <iostream>
using namespace std;
template <class T>
class myclass
{
public:
    T data;
    myclass(T a);
    void display();
};
template <class T>
myclass<T>::myclass(T a)
{
    data = a;
}
template <class T>
void myclass<T>::display()
{
    cout << data << endl;
}
int main()
{
    myclass<float> ob(5.2);
    ob.display();
    return 0;
}