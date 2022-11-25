#include<iostream>
#include <fstream>
using namespace std;

int main(){
    string s="Kaisan ba!";
    ofstream out("sample60.txt");
    out<<s;
    ifstream in("sample60b.txt");
    getline(in,s);
    cout<<s;
    return 0;
}