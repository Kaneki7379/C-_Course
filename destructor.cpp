#include <iostream>
using namespace std;
int c = 0;
class Number
{
public:
    Number()
    {
        c++;
        cout << "Constructor called for object number " << c << endl;
    }
    ~Number()
    {
        cout << "Destructor called for object number " << c << endl;
        c--;
    }
};
int main()
{
    cout << "Entering main function." << endl;
    {
        cout << "Entering this block." << endl;
        cout << "Creating two more objects." << endl;
        Number ob1, ob2;
    }
    Number ob;
    return 0;
}