#include<iostream>
using namespace std;
inline int add(int ,int =0,int =0);
int main()
{
    int a,b,c;
    cout<<"enter the three numbers:";
    cin>>a>>b>>c;
    cout<<"addition of three numbers is "<<add(a,b,c);
    cout<<endl<<"enter the two numbers:";
    cin>>a>>b;
    cout<<"addition of two numbers is "<<add(a,b);
}
int add(int a,int b,int c)
{
    return a+b+c;
}