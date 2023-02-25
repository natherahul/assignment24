#include<iostream>
using namespace std;
int isprime(int &n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int num,k,&n=num;
    cout<<"enter the number:"<<endl;
    cin>>num;
    k=isprime(num);
    if(k)
    {
        cout<<num<<" is not prime number";
    }
    else
    {
        cout<<num<<" is prime number";
    }
    return 0;
}