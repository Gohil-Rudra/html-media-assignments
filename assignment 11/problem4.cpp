// Given an array, predict if the array contains duplicates or not
#include<iostream>
using namespace std;
int main(){
    int n,p=1;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cout<<"enter element "<<i<<" ";
        cin>>arr[i];
    }
    bool flag=false;
    for(int j=0;j<=n-1;j++){
        for(int k=j+1;k<=n-1;k++){
            if(arr[j]==arr[k]) flag=true;
        }
    }
    if (flag==true) cout<<"duplicate present";
    else cout<<"duplicate absent";
}