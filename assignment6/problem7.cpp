#include<iostream>
using namespace std;
int main (){
    int n,f=1;
    cout<<"Enter the last number : ";
    cin>>n;
    for(int j=1;j<=n;j++){
        cout<<j<<"! ="<<(f=f*j)<<endl;
    }
}