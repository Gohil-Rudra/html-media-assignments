#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"enter the number of terms";
    cin>>n;
    if(n==0) b=0;
    cout<<" "<<b;
    for(int i=1;i<=n-1;i++){
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;

    }

}