#include<iostream>
using namespace std;
int fibo(int n);
int main()
{
    int n;
    while(1)
    {
        cout<<"enter integer to find fibo:";
        cin>>n;
        if(n==0)
        break;
        cout<<fibo(n)<<endl;
    }
return 0;
}
int fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {

        return 1;
    }
    else
    return fibo(n-1)+fibo(n-2);
}