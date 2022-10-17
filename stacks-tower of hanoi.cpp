#include <iostream>
using namespace std;
void toh(int n,char sour,char dest,char aux);
void toh(int n,char sour,char dest,char aux)
{
    if(n==1)
    {
        cout<<"move disk 1 from"<<sour<<"to"<<dest<<"\n";
        return;
    }
    else
    {
        toh(n-1,sour,aux,dest);
        cout<<"move disc"<<n<<"from"<<sour<<"to"<<dest<<"\n";
        toh(n-1,aux,dest,sour);
    }
}
int main()
{
    int n;
    cout<<"enter no.of disks:";
    cin>>n;
    toh(n,'A','C','B');
}