//Calculate the product of all the elements in the given array.
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
//arr[5]={2,54,65,33,23}
    for(int j=0;j<=n-1;j++){
        p*=arr[j];
    }
    cout<<"product = "<<p;
}
