#include <iostream>
using namespace std;
template <class T>
class
    vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotproduct(vector &ob)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * ob.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3);
    v1.arr[0] = 1.3;
    v1.arr[1] = 3.2;
    v1.arr[2] = 4.5;

    vector<float> v2(3);
    v2.arr[0] = 9.2;
    v2.arr[1] = 0.2;
    v2.arr[2] = 6.5;
    cout << v2.dotproduct(v1) << endl;
    return 0;
}