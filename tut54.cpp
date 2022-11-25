#include <iostream>
using namespace std;
class base
{
public:
    int base_var;
    void display()
    {
        cout << "The value of base variable is : " << base_var << endl;
    }
};
class derived : public base
{
public:
    int derived_var;
    void display()
    {
        cout << "The value of base variable is : " << base_var << endl;
        cout << "The value of derived variable is : " << derived_var << endl;
    }
};
int main()
{
    base *base_class_pointer;
    derived *derived_class_pointer;
    derived ob;
    base_class_pointer = &ob;
    base_class_pointer->base_var = 56;
    base_class_pointer->display();
    derived_class_pointer = &ob;
    derived_class_pointer->base_var = 45;
    derived_class_pointer->derived_var = 3400;
    derived_class_pointer->display();
    return 0;
}