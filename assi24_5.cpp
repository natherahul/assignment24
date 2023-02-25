/*check whether given number is in fibbonacci series or not*/
#include<iostream>
using namespace std;
int isfibbo_series(int &m)
{
    int c,a=-1,b=1;
    while(b<=m)
    {
        c=a+b;
        if(b==m)
        {
            return 1;
        }
        a=b;
        b=c;
    }
    return 0;
}
int main()
{
    int num,k,&m=num;
    cout<<"enter the number:";
    cin>>num;
    k=isfibbo_series(num);
    if(k)
    {
        cout<<num<<" is in fibbonacci series";
    }
    else{
        cout<<num<<" is not in fibbonacci series";
    }
}
