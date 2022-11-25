#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    //Declaring object out of type ofstream. 
    ofstream out;
    
    //Connecting object out to the file using .open().
    out.open("sample60.txt");
    out<<"What do you want mf?"<<endl;
    out<<"Chup be!\n";
    out<<"fuck off DUDE!\n";
    
    //Closing the link between the file and the object.
    out.close();
    string s;
    ifstream in("sample60.txt");

    //Using eof() function. 
    while(in.eof()==0){
        getline(in,s);
        cout<<s<<endl;   
    }
    return 0;
}