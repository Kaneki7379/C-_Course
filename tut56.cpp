#include <iostream>
using namespace std;
class base
{
public:
    int base_var=45;
    virtual void display()
    {
        cout << "The value of base variable is : " << base_var << endl;
    }
};
class derived : public base
{
public:
    int derived_var=67;
    void display()
    {
        cout << "The value of base variable is : " << base_var << endl;
        cout << "The value of derived variable is : " << derived_var << endl;
    }
};
int main()
{
    base *base_class_pointer;
    derived ob;
    base_class_pointer = &ob;
    base_class_pointer->display();
    return 0;
}