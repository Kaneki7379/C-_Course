#include<iostream>
using namespace std;
class shop{
    int itemID[100];
    int itemPrice[100];
    int c;
    public:
    void constant(void){c=0;}
    void setprice(void);
    void displayprice(void);
    };
    void shop::setprice(){
            cout<<"Enter the Item ID and Price of Item No."<<c+1<<" Price"<<endl;
            cin>>itemID[c];
            cin>>itemPrice[c];
            c++;
    }
     void shop::displayprice(){
            for (int i = 0; i < c; i++)
            {
                cout<<"The Item ID is "<<itemID[i]<<" and it's Price is "<<itemPrice[i]<<endl;
            }
    }
int main(){
    shop obj;
    obj.constant();
    obj.setprice();
    obj.setprice();
    obj.setprice();
    obj.displayprice();
    obj.constant();
    obj.setprice();
    obj.displayprice();
    return 0;
}