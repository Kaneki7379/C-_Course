#include<iostream>
using namespace std;
#include<string>
class binary{
    //Private//
    string s;
    void check_bin();
    public:
    void read();
    void display();
    void ones_compliment();
};
void binary::read(){
    cout<<"Enter a binary number."<<endl;
    cin>>s;
}
void binary::check_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0'&&s.at(i)!='1'){
        cout<<"Invalid binary Number."<<endl;
        exit(0);
    }
    }
    }
    void binary::ones_compliment(){
        check_bin();//nesting without using object//
        cout<<"The one's compliment of the given binary number is ="<<endl;
    for(int i=0;i<s.length();i++){
      if(s.at(i)=='0')
      s.at(i)='1';
      else
      s.at(i)='0'; 
    }
    }   
    void binary::display(){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    }
 int main(){
    binary obj;
    obj.read();
    obj.ones_compliment();
    obj.display();
 return 0;
}