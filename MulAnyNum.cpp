#include<iostream>

using namespace std;
int main(){
    cout<<"This can be used to print any number's multiplication table user wants"<<endl;
    int j;
    cout<<"Enter any number you want to print multiplication table"<<endl;
    cin>>j;
    int i=1;
    do{
        cout<<j<<"*"<<i<<"="<<j*i<<endl;
        i++;
    }while(i<=10); 

   // while(i<=0){
   //     cout<<j<<"*"<<i<<"="<<j*i<<endl;
   //     i++;
   // }

    return 0;
}