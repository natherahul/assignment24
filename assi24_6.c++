#include<iostream>
using namespace std;
void swap(int &m,int &n)
{
    int t;
    t=m;
    m=n;
    n=t;
    return ;
}
int main()
{
    int a,b;
    int &m=a,&n=b;
    cout<<"enter the two numbers";
    cin>>a>>b;
    cout<<"before swapping a="<<a<<" b="<<b<<endl;
    swap(a,b);
    cout<<"after swapping a="<<a<<" b="<<b;

}