#include<iostream>
using namespace std;
int main(){

    for(int i=1;i<=500;i++){
        int x=i,l,r=0;
        for(;x>0;){
            l=x%10;
            r=r+l*l*l;
            x=x/10;
            
        }
        if (r==i) cout<<i<<endl;
    }
}