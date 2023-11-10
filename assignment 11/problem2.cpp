//Find the second largest element in the given Array in one pass.
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
    int max1=arr[0],max2=arr[1];
    if (max1<max2) swap(max1,max2);
    for(int j=2;j<=n-1;j++){
        if (arr[j]>max1){
            max2=max1;
            max1=arr[j];
        }
        if (arr[j]<max1 && arr[j]>max2) max2=arr[j];
    }
    cout<<"Largest :"<<max1<<endl;
    cout<<"Second Largest :"<<max2;
}
