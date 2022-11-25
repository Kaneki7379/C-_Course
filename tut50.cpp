#include <iostream>
using namespace std;
int main()
{
    float *p = new float(40.98);
    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    int *ptr = new int(4);
    delete ptr;
    delete[] arr;//Using delete operator for array.
    cout << "The value at address of ptr is : " << *ptr << endl;
    cout << "The value at address of p is : " << *p << endl;
    cout << "The value at address of a[0] is : " << arr[0] << endl;
    cout << "The value at address of a[1] is : " << arr[1] << endl;
    cout << "The value at address of a[2] is : " << arr[2] << endl;
    return 0;
}