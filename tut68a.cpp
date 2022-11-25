#include<iostream>
using namespace std;
void func(int a)
    {
        cout << "This is the first func() where a is :" << a << endl;
    }
    template <class T>
    void func(T a)
    {
        cout << "This is the second func() where a is :" << a << endl;
    }
int main(){
    func(4);
    return 0;
}