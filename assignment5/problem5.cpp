//display this GP 3,12,48,...upto n terms
#include<iostream>
using namespace std;
int main(){
    int n,a=3;
    cout<<"enter no. of terms :";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a*4;
    }
}