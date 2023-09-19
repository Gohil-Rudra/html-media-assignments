#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    //printing upper triangle 
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
    //printing lower triangle 
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++) cout<<" ";
        for(int j=1;j<=n-i;j++) cout<<"*";
        cout<<endl;
    }
}