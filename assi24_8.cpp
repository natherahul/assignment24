#include<iostream>
using namespace std;
int area(int &);
int area(int& ,int&);
float area(float& ,float&);
int main()
{
    int rad,l,b;
    float base,height;
    cout<<"enter the radius of circle:";
    cin>>rad;
    cout<<"area of circle: "<<area(rad)<<endl;
    cout<<"enter the length and breadth and height of rectangle:";
    cin>>l>>b;
    cout<<"area of rectangle : "<<area(l,b)<<endl;
    cout<<"enter base and height of triangle";
    cin>>base>>height;
    cout<<"area of triangle is: "<<area(base,height);
}
int area(int &rad)
{
    return 3.14*rad*rad;
}
int area(int &l,int &b)
{
    return l*b;
}
float area(float &base,float &height)
{
    return (base*height)/2;
}