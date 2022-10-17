//store elements in 1d array and display it
#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[10];
     cout<<"enter the size of array";
    cin>>n;
    cout<<"entr"<<n<<"integers";
    for (int i=1; i<=5; i++) {
        cin>>arr[i];}
    cout<<"the elements are;";
    for(int i=1; i<=5;i++ ){
        cout<<arr[i]<<" ";
    }
    return 0;

     
}