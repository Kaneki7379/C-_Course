#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;
    friend void distance(point o1, point o2);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The point is " << x << ", " << y << endl;
    }
};
void distance(point o1, point o2)
{
    double d = sqrt((pow((o2.x - o1.x), 2) + (pow((o2.y - o1.y), 2))));
    cout << "The distance between points is " << d << endl;
}
int main()
{
    point a(5, 6);
    a.display();
    point b = point(7, 8);
    b.display();
    distance(a, b);
    return 0;
}