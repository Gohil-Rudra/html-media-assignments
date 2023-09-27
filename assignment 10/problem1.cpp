#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *ptr1=&a;
    int* ptr2=&b;
    cout<<"enter number 1 :";
    cin>>a;
    cout<<"enter number 2 :";
    cin>>b;
    cout<<(*ptr1)*(*ptr2);
}