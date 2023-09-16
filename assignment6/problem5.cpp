#include<iostream>
using namespace std;
int main (){
    int x,count=0,l,sum=0;
    cout<<"enter the number";//9978 --> 17
    cin>>x;
    while(x>0){
        count+=1;
        l=x%10;
            if(count%2!=0){
                        sum=sum+l;
                        }
    
        x=x/10;
    }
    cout<<"sum of even places of number is :"<<sum;
}
