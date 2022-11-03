#include<iostream>

using namespace std;
int main(){
    cout<<"Swap two variables without using third variable"<<endl;
    int a;
    int b;
    cout<<"Enter two numbers"<<endl;
    cin>>a;
    cin>>b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}