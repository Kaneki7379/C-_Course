#include <iostream>
using namespace std;
class student
{
protected:
    int id;

public:
    void set_rollnumber(int i)
    {
        id = i;
    }
    void getid()
    {
        cout << "Your roll number is : " << id << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "Your marks are :" << endl
             << "Physics :" << physics << endl
             << "Maths :" << maths << endl;
    }
};
class scores : virtual public student
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void get_score()
    {
        cout << "P.T. Score : " << endl;
        cout << score << endl;
    }
};
class result : public test, public scores
{
public:
    void display()
    {
        getid();
        get_marks();
        get_score();
        cout << "The Total Marks is : " << physics + maths + score << endl;
    }
};
int main()
{
    result ob;
    ob.set_rollnumber(420);
    ob.set_marks(79.0, 75.0);
    ob.set_score(9);
    ob.display();
    return 0;
}