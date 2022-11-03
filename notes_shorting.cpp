#include<iostream>
using namespace std;

int main(){
    int R500,R100,R50,R20,R10,R5,R1,amt;
    cout<<"Enter any number"<<endl;
    cin>>amt;
    R500=amt/500;
    amt=amt%500;
    R100=amt/100;
    amt=amt%100;
    R50=amt/50;
    amt=amt%50;
    R20=amt/20;
    amt=amt%20;
    R10=amt/10;
    amt=amt%10;
    R5=amt/5;
    amt=amt%5;
    R1=amt;
    cout<<"R500="<<R500<<endl<<"R100="<<R100<<endl<<"R50="<<R50<<endl<<"R20="<<R20<<endl<<"R10="<<R10<<endl<<"R5="<<R5<<endl<<"R1="<<R1<<endl;
    return 0;
    }