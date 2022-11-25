#include<iostream>
using namespace std;
int prime(int a){
    int c=0;
for(int i=1;i<=a;i++){
if(a%i==0)
c++;
}
if(c==2)
return 1;
}

int main(){
    cout<<"Enter the range to print a twin prime number ="<<endl;
    int n,m;
    cin>>n>>m;
    for (int i = n; i <=m; i++)
    {
        int p=i+2;
        if(prime(i)==1&&prime(p)==1){
         cout<<i<<" "<<p<<endl;
        }
     }
    return 0;
}