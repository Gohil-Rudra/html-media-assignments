#include<iostream>
using namespace std;
int main (){
    int x,r=0,l,t;
    cout<<"enter the number :";
    cin>>x;
    t=x;
    while(x>0){
        l=x%10;
        r=r*10+l;
        x=x/10;
        }
    cout<<"sum = "<<r+t;


}