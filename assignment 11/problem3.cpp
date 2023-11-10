//Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cout<<"enter element "<<i+1<<" ";
        cin>>arr[i];
    }
    int p=arr[0];
//arr[5]={2,54,65,33,23}
    for(int j=1;j<=n-1;j++){
        if(arr[j]<p) p=arr[j];
    }
    cout<<"minimum :"<<p;
}
