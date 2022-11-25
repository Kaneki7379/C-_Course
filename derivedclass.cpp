#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    float salary;
    employee() {}
    employee(int i)
    {
        id = i;
        salary = 34.0;
    }
    ~employee()
    {
        cout << "Destructor called." << endl;
    }
};
class programmer : public employee
{
public:
    int languagecode;
    programmer(int i)
    {
        id = i;
        languagecode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), spd(2);
    cout << harry.salary << endl;
    cout << spd.salary << endl;
    programmer skillF = programmer(10);
    cout << skillF.languagecode << endl;
    cout << skillF.id << endl;
    skillF.getdata();
    return 0;
}