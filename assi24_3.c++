#include<iostream>
using namespace std;
void power(int &a,int &b)
{
    int i,num=1;
    for(i=1;i<=b;i++)
    {
        num=num*a;
    }
    cout<<a<<" raised to "<<b<<" is "<<num;
}
int main()
{
    int x,y,&a=x,&b=y;
    cout<<"enter the x and y:";
    cin>>x>>y;
    power(x,y);

    return 0;
}