// WAP to find the smallest missing positive element in the
// "sorted Array" that contains only "positive elements".
//ex: Array: [1, 2, 3, 6, 10]
//    Smallest missing positive element: 4

#include<iostream>
using namespace std;
int main(){
    int n,p=1;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cout<<"enter element "<<i+1<<" ";
        cin>>arr[i];
    }
    //ex: Array: [61, 62, 63,66,69]
    int first=arr[0];
    bool flag=1;
    for(int i=1;i<=n-1;i++){
    if(arr[i]!= first+i)
    {
    cout<<"Smallest missing positive element:"<<(first+i);
    break;   
    }
        
    }

}
