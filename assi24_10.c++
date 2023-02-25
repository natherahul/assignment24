#include<iostream>
using namespace std;
int add(int ,int);
float add(float,float);
int main()
{
    int a,b;
    float x,y;
    char m,n;
    cout<<"enter two numbers of int:";
    cin>>a>>b;
    cout<<"addition of two numbers is:"<<add(a,b)<<endl;
    cout<<"enter two numbers of float:";
    cin>>x>>y;
    cout<<"addition of two numbers is:"<<add(x,y)<<endl;
    cout<<"enter two numbers(of charcter):";
    cin>>m>>n;
    cout<<"addition of two numbers is:"<<add(m,n);
}
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}