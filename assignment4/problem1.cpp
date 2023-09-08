#include<iostream>
using namespace std;
int main (){
    int r1=0,r2=0,r5=0,r10=0,r20=0,r50=0,r100=0,r200=0,r500=0,r2000=0,total;
    int amount;
    cout<<"enter amount :";
    cin>>amount;
    switch(amount>=2000){

        case 1:
            r2000=amount/2000;
            cout<<"2000 Rs notes are "<<r2000<<endl;
            amount=amount-(r2000*2000);
            break;
    }
    switch(amount>=500){

        case 1:
            r500=amount/500;
            cout<<"500 Rs notes are  "<<r500<<endl;
            amount=amount-(r500*500);
            break;
    }
    switch(amount>=200){
        case 1:
            r200=amount/200;
            cout<<"200 Rs notes are  "<<r200<<endl;
            amount=amount-(r200*200);
            break;
    }
    switch(amount>=100){
        case 1:
            r100=amount/100;
            cout<<"100 Rs notes are  "<<r100<<endl;
            amount=amount-(r100*100);
            break;
    }
    switch(amount>=50){
        case 1:
            r50=amount/50;
            cout<<"50 Rs notes are  "<<r50<<endl;
            amount=amount-(r50*50);
            break;
    }
    switch(amount>=20){
        case 1:
            r20=amount/20;
            cout<<"20 Rs notes are  "<<r20<<endl;
            amount-=(r20*20);
            break;
    }
    switch(amount>=10){       
        case 1:
            r10=amount/10;
            cout<<"10 Rs notes are  "<<r10<<endl;
            amount-=(r10*10);
            break;
    }
    switch(amount>=5){
        case 1:
            r5=amount/5;
            cout<<"5 Rs notes are  "<<r5<<endl;
            amount-=(r5*5);
            break;
    }
    switch(amount>=2){
        case 1:
            r2=amount/2;
            cout<<"2 Rs notes are  "<<r2<<endl;
            amount-=(r2*2);
            break;
    }
    switch(amount>0){    
        case 1:
            r1=amount;
            cout<<"1 Rs notes are  "<<r1<<endl;
            break;
    }
    switch(amount<0){
        case 1:
            cout<<"enter amount is not valid";
    }
       cout<<"minimum notes = "<<r2000+r500+r200+r100+r50+r20+r10+r5+r2+r1;


}