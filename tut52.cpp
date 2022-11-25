#include <iostream>
using namespace std;
class ShopItems
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "The I.D. of product is : " << id << endl;
        cout << "The Price of product is : " << price << endl;
    }
};
int main()
{
    int size = 3;
    int p;
    float q;
    ShopItems *ptr = new ShopItems[size];
    ShopItems *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of id and price : " << endl;
        cin>>p>>q;
        (*ptr).setdata(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}