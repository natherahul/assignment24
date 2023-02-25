#include<iostream>
using namespace std;
int max(int& ,int& );
float max(float&,float&);
int main()
{
    int a,b;
    float x,y;
    char p,q;
    cout<<"enter a and b:";
    cin>>a>>b;
    cout<<"maximum number is:"<<max(a,b)<<endl;
    cout<<"enter x and y";
    cin>>x>>y;
    cout<<"maximum number is:"<<max(x,y)<<endl;
    cout<<"enter p and q:";
    cin>>p>>q;
    cout<<"maximum character is:"<<max(p,q);
}
int max(int &a,int &b)
{
    if(a>b)
        return a;
    return b;
}
float max(float &a,float &b)
{
    if(a>b)
        return a;
    return b;
}