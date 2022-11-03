#include<iostream>

using namespace std;
int main(){
    cout<<"This is do-while loop test"<<endl;
    int i=1, j=6;
    do{
        cout<<j<<"*"<<i<<"="<<j*i<<endl;
        i++;
    }while(i<=10);
    
    cout<<"This is while loop test"<<endl;
    while(i<=10) {
        cout<<j<<"*"<<i<<"="<<j*i<<endl;
        i++;
    }

    cout<<"This is for loop test"<<endl;
    for(i=1; i<=10; i++) {
        cout<<j<<"*"<<i<<"="<<j*i<<endl;
    }

    return 0;
}