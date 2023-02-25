#include<iostream>
using namespace std;
int high_digit(int &a)
{
    int i=0,rem,num=a;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        if(i<rem)
        {
            i=rem;
        }
    }
    return i;
}
int main()
{
    int num,k,&a=num;
    cout<<"enter the number:";
    cin>>num;
    k=high_digit(num);
    cout<<k<<" is high digit in "<<num;
    return 0;
}