#include <iostream>
using namespace std;
class studentid
{
protected:
    int id;

public:
    void set_roll_number(int i);
    int get_roll_number(void);
};
class exam : public studentid
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2);
    float get_marks(void);
};
class results : public exam
{
public:
    void display();
};
void studentid::set_roll_number(int i)
{
    id = i;
}
int studentid::get_roll_number()
{
    return id;
}
void exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
float exam::get_marks()
{
    return maths, physics;
}
void results::display()
{
    get_roll_number();
    get_marks();
    cout << "The marks of maths is " << maths << "." << endl;
    cout << "The marks of physics is " << physics << "." << endl;
    cout << "The percentage is " << (physics + maths) / 2 << "%"
         << "." << endl;
}
int main()
{
    results obj;
    obj.set_roll_number(420);
    obj.set_marks(79.0, 76.0);
    obj.display();
    return 0;
}