#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=65;
         for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){  
            cout<<(char)a;
            a++;
        }
        cout<<endl;
    }
}