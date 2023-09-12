#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of terms : ";
    cin>>n;
    int b;
    b=4+(n-1)*3;
    for(int i=4;i<=b;i+=3){
        cout<<i<<",";
    }
}
